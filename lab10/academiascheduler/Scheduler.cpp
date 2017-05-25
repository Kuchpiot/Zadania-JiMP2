//
// Created by piotr on 21.05.17.
//

#include <algorithm>
#include "Scheduler.h"

// Kolejność cyferek w konstruktorze:
// 0 - CourseId
// 1 - TeacherId
// 2 - RoomId
// 3 - TimeSlot
// 4 - Year

academia::Schedule academia::Schedule::OfTeacher(int teacher_id) const
{
    Schedule teacherSchedule;
    std::vector<SchedulingItem> singleSchedule;

    auto it = std::copy_if(schedule.begin(), schedule.end(), singleSchedule.begin(),
                           [teacher_id](SchedulingItem i){ return i.TeacherId() == teacher_id; });

    teacherSchedule.setSchedule(singleSchedule);
    return teacherSchedule;
}

academia::Schedule academia::Schedule::OfRoom(int room_id) const
{
    Schedule roomSchedule;
    std::vector<SchedulingItem> singleSchedule;

    std::copy_if(schedule.begin(), schedule.end(), singleSchedule.begin(),
                    [room_id](SchedulingItem i){ return i.RoomId() == room_id; });

    roomSchedule.setSchedule(singleSchedule);
    return roomSchedule;
}

academia::Schedule academia::Schedule::OfYear(int year) const
{
    Schedule yearSchedule;
    std::vector<SchedulingItem> singleSchedule;

    std::copy_if(schedule.begin(), schedule.end(), singleSchedule.begin(),
                 [year](SchedulingItem i){ return i.Year() == year; });

    yearSchedule.setSchedule(singleSchedule);
    return yearSchedule;
}

std::vector<int> academia::Schedule::AvaibleTimeSlots(int n_time_slots) const
{
    std::vector<int> avaibleSlots;

    for (int i = 0; i < n_time_slots; ++i)
    {
        avaibleSlots.push_back(i+1);
    }

    for (auto &&item : schedule)
    {
        if(std::find(avaibleSlots.begin(), avaibleSlots.end(), item.TimeSlot()) != avaibleSlots.end())
        {
            std::remove(avaibleSlots.begin(), avaibleSlots.end(), item.TimeSlot());
        }
    }

    return avaibleSlots;
}

void academia::Schedule::InsertScheduleItem(const academia::SchedulingItem &item)
{
    for (auto &&i : schedule)
    {
        if(i.TimeSlot() == item.TimeSlot())
        {
            throw NoViableSolutionFound();
        }
    }

    schedule.push_back(item);
}

size_t academia::Schedule::Size() const
{
    return schedule.size();
}

// Kolejność cyferek w konstruktorze:
// 0 - CourseId
// 1 - TeacherId
// 2 - RoomId
// 3 - TimeSlot
// 4 - Year

academia::Schedule academia::Scheduler::PrepareNewSchedule(const std::vector<int> &rooms,
                                                          std::map<int, std::vector<int>> &teacher_courses_assignment,
                                                          const std::map<int, std::set<int>> &courses_of_year,
                                                          int n_time_slots)
{
    Schedule newSchedule;

    int i = 1;
    auto it = rooms.begin();

    std::vector<SchedulingItem> si;

    for (auto &&course: courses_of_year)
    {
        for (auto &&item : course.second)
        {
            for (auto &&teacher : teacher_courses_assignment)
            {
                if(std::find(teacher.second.begin(), teacher.second.end(), item) != teacher.second.end())
                {
                    if(i <= n_time_slots)
                    {
                        si.push_back( SchedulingItem {item,
                                                      *std::find(teacher.second.begin(), teacher.second.end(), item),
                                                      *it,
                                                      i,
                                                      course.first} );
                        ++it;
                        ++i;
                    }
                    else
                    {
                        throw NoViableSolutionFound();
                    }
                }
            }
        }
    }

    newSchedule.setSchedule(si);
    return newSchedule;
}

int academia::SchedulingItem::TeacherId() const
{
    return teacher_id_;
}

int academia::SchedulingItem::RoomId() const
{
    return room_id_;
}

int academia::SchedulingItem::Year() const
{
    return year_;
}

int academia::SchedulingItem::CourseId() const
{
    return course_id_;
}

int academia::SchedulingItem::TimeSlot() const
{
    return time_slot_;
}

academia::SchedulingItem::SchedulingItem(std::initializer_list<int> l)
{
    int i = 0;
    for (auto &&item : l)
    {
        switch (i)
        {
            case 0:
                course_id_ = item;
                break;

            case 1:
                teacher_id_ = item;
                break;

            case 2:
                room_id_ = item;
                break;

            case 3:
                time_slot_ = item;
                break;

            case 4:
                year_ = item;
                break;

            default:
                throw NoViableSolutionFound();
        }
        i++;
    }
}
