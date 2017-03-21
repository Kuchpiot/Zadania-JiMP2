//
// Created by Dominik Zabłotny on 19.03.2017.
//

#ifndef LAB3_TINYURL_H
#define LAB3_TINYURL_H

namespace tinyurl
{
    struct TinyUrlCodec
    {

    };

    std::unique_ptr<TinyUrlCodec> Init();

    void NextHash(std::array<char, 6> *state);

    std::string Encode(const std::string &url, std::unique_ptr<TinyUrlCodec> *codec);

    std::string Decode(const std::unique_ptr<TinyUrlCodec> &codec, const std::string &hash);

}
#endif //LAB3_TINYURL_H
