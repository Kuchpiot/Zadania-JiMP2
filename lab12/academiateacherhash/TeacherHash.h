//
// Created by piotr on 09.06.17.
//

#ifndef JIMP_EXERCISES_TEACHERHASH_H
#define JIMP_EXERCISES_TEACHERHASH_H

#include <cstdio>
#include <system_error>

namespace academia
{
    class TeacherId
    {
    public:
        TeacherId(int id) : id_{id} {}

        operator int() const
        {
            return id_;
        }

        bool operator !=(const TeacherId t2) const
        {
            return id_ != int(t2);
        }

        bool operator !=(const int val) const
        {
            return id_ != val;
        }

    private:
        int id_;
    };

    class Teacher
    {
    private:
        std::string name_;
        std::string departament_;
        TeacherId id_;
    public:
        Teacher(const TeacherId id, const std::string name, const std::string dep) :
                id_{id}, name_{name}, departament_{dep} {}

        inline std::string Name() { return name_; }
        inline std::string Department() { return departament_; }
        inline int Id() { return int(id_); }

        bool operator !=(Teacher it2) const
        {
            return name_ != it2.name_
                   && departament_ != it2.Department()
                   && id_ != it2.Id();
        }
        
        bool operator ==(Teacher i2) const 
        {
            return name_ == i2.name_
                   && departament_ == i2.Department()
                   && id_ == i2.Id();
        }
    };

    class TeacherHash
    {
    public:
        size_t operator() (Teacher t) const
        {
            return ((51503 * (std::hash<int>()(t.Id()) *
                              std::hash<std::string>()(t.Name()) +
                              std::hash<std::string>()(t.Department()))
                     + 42841) % 101599) % 15479501;
        }


    };
}

#endif //JIMP_EXERCISES_TEACHERHASH_H
