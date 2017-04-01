//
// Created by piotr on 25.03.17.
//

#ifndef JIMP_EXERCISES_SIMPLEJSON_H
#define JIMP_EXERCISES_SIMPLEJSON_H

#include <experimental/optional>
#include <string>
#include <map>
#include <vector>

namespace nets
{
    enum VarType
    {
        INT_TYPE,
        DOUBLE_TYPE,
        BOOL_TYPE,
        STRING_TYPE,
        VECTOR_TYPE,
        MAP_TYPE
    };

    class JsonValue
    {
    public:
        JsonValue(int value);
        JsonValue(double value);
        JsonValue(bool value);
        JsonValue(std::string value);
        JsonValue(std::vector<JsonValue> value);
        JsonValue(std::map<std::string, JsonValue> value);

        std::experimental::optional<JsonValue> ValueByName(const std::string &name) const;
        std::string ToString() const;

    private:
        struct DataType
        {
            VarType type;
            union
            {
                int int_value;
                double double_value;
                bool bool_value;
                std::string string_value;
                std::vector<JsonValue> vector_value;
                std::map<std::string, JsonValue> map_value;
            };

            DataType(int x)
            {
                type = INT_TYPE;
                int_value = x;
            }
            DataType(double x)
            {
                type = DOUBLE_TYPE;
                double_value = x;
            }
            DataType(bool x)
            {
                type = BOOL_TYPE;
                bool_value = x;
            }
            DataType(std::string x)
            {
                type = STRING_TYPE;
                string_value = x;
            }
            DataType(std::vector<JsonValue> x)
            {
                type = VECTOR_TYPE;
                vector_value = x;
            }
            DataType(std::map<std::string, JsonValue> x)
            {
                type = MAP_TYPE;
                map_value = x;
            }
        };

        DataType *my_value_ = nullptr;
    };


}

#endif //JIMP_EXERCISES_SIMPLEJSON_H