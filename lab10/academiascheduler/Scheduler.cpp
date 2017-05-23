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
                           [teacher_id](std::vector<int> i){ return i.at(1) == teacher_id; });

    teacherSchedule.setSchedule(singleSchedule);
    return teacherSchedule;
}

academia::Schedule academia::Schedule::OfRoom(int room_id) const
{
}

academia::Schedule academia::Schedule::OfYear(int year) const
{
}

std::vector<int> academia::Schedule::AvaibleTimeSlots(int n_time_slots) const
{
}

void academia::Schedule::InsertScheduleItem(const academia::SchedulingItem &item)
{
}

size_t academia::Schedule::Size() const
{
    return 0;
}

academia::Schedule academia::Scheduler::PrepareNewSchedule(const std::vector<int> &rooms,
                                                          std::map<int, std::vector<int>> &teacher_courses_assignment,
                                                          const std::map<int, std::set<int>> &courses_of_year,
                                                          int n_time_slots)
{
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

academia::SchedulingItem::SchedulingItem(std::vector<int> list)
{
    course_id_ = list[0];
    teacher_id_ = list[1];
    room_id_ = list[2];
    time_slot_ = list[3];
    year_ = list[4];
}
