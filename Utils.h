#pragma once
#ifndef __OSULIB_UTILS_H_
#define __OSULIB_UTILS_H_

#include <string>
#include <string_view>
#include <vector>
#include <Windows.h>

std::vector<std::string_view> ExplodeView(const std::string_view& str, const std::string_view& delim);

auto MakeSignature(const std::string_view& fmt_string);
const uintptr_t FindSignature(const std::string_view& fmt_string, const int ptr_offs = 0);

void TakeControl();
void ReleaseControl();

void EnableRelaxMisses(char* texture_base_ptr, char* audio_base_ptr);
void EnableRelaxFailure(char* fail_base_ptr);

void DisableRelaxMisses(char* texture_base_ptr, char* audio_base_ptr);
void DisableRelaxFailure(char* fail_base_ptr);

#endif __OSULIB_UTILS_H_
