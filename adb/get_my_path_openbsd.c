/*
 * Copyright (C) 2009 bsdroid project
 *               Alexey Tarasov <tarasov@dodologics.com>
 *
 * Copyright (C) 2007 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <sys/types.h>
#include <unistd.h>
#include <limits.h>
#include <stdio.h>

void
get_my_path(char *exe, size_t maxLen)
{
    /* TODO: can sysctl give us the proc exe path? */
    exe[0] = '.';
    exe[1] = '/';
    exe[2] = 'a';
    exe[3] = 'd';
    exe[4] = 'b';
    exe[5] = '\0';
}
