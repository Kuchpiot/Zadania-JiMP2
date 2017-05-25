//
// Created by piotr on 21.05.17.
//

#ifndef JIMP_EXERCISES_SCHEDULER_H
#define JIMP_EXERCISES_SCHEDULER_H

#include <vector>
#include <cstdio>
#include <map>
#include <set>

namespace academia
{
    class NoViableSolutionFound
    {

    };

    class SchedulingItem
    {
    public:
        SchedulingItem(std::initializer_list<int> l);
        int TeacherId() const;
        int RoomId() const;
        int Year() const;
        int CourseId() const;
        int TimeSlot() const;

    private:
        int course_id_;
        int teacher_id_;
        int room_id_;
        int time_slot_;
        int year_;
    };

    class Schedule
    {
    public:
        Schedule OfTeacher(int teacher_id) const;
        Schedule OfRoom(int room_id) const;
        Schedule OfYear(int year) const;
        std::vector<int> AvaibleTimeSlots(int n_time_slots) const;
        void InsertScheduleItem(const SchedulingItem &item);
        size_t Size() const;

        void setSchedule( std::vector<SchedulingItem> s)
        {
            schedule = s;
        }

        inline const SchedulingItem& operator[] (unsigned long i) { return schedule.at(i); }

    private:
        std::vector < SchedulingItem > schedule;
    };

    class Scheduler
    {
    public:
        Schedule PrepareNewSchedule(const std::vector <int> &rooms,
                                   std::map <int, std::vector<int>> &teacher_courses_assignment,
                                   const std::map<int, std::set<int>> &courses_of_year,
                                   int n_time_slots);
    };

    class GreedyScheduler : public Scheduler
    {

    };
}


#endif //JIMP_EXERCISES_SCHEDULER_H
