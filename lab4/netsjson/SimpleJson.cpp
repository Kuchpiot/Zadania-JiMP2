//
// Created by piotr on 25.03.17.
//


#include <memory>
#include "SimpleJson.h"
#include <iomanip>
#include <sstream>
#include <iostream>

namespace nets
{
    JsonValue::JsonValue(int value)
    {
        my_value_ = new DataType(value);
    }
    JsonValue::JsonValue(double value)
    {
        my_value_ = new DataType(value);
    }
    JsonValue::JsonValue(bool value)
    {
        my_value_ = new DataType(value);
    }
    JsonValue::JsonValue(std::string value)
    {
        my_value_ = new DataType(value);
    }
    JsonValue::JsonValue(std::vector<JsonValue> value)
    {
        my_value_ = new DataType(value);
    }
    JsonValue::JsonValue(std::map<std::string, JsonValue> value)
    {
        my_value_ = new DataType(value);
    }

    std::experimental::optional<JsonValue> JsonValue::ValueByName(const std::string &name) const
    {
        if(my_value_->type == MAP_TYPE)
        {
            for (auto s : my_value_->map_value)
            {
                if (s.first == name)
                {
                    return std::experimental::optional<JsonValue>();
                }
            }
        }
    }

    std::string JsonValue::ToString() const
    {
        switch (my_value_->type)
        {
            case INT_TYPE:
                return std::to_string(my_value_->int_value);

            case DOUBLE_TYPE:
            {
                std::stringstream stream;
                stream << std::fixed << std::setprecision(2) << my_value_->double_value;
                return stream.str();
            }

            case STRING_TYPE:
                return "\"" + my_value_->string_value + "\"";

            case BOOL_TYPE:
                return my_value_->bool_value ? "true" : "false";

            case VECTOR_TYPE:
            {
                std::string result = "[";

                for (auto s : my_value_->vector_value)
                {
                    result += s.ToString().append(", ");
                }

                result = result.substr(0, result.length() - 2);

                return result.append("]");
            }

            case MAP_TYPE:
            {
                std::string result2 = "";

                for (auto s : my_value_->map_value)
                {
                    result2.append("\"" + s.first + "\": " + s.second.ToString() + " ");
                }

                return result2;
            }
        }
    }
}