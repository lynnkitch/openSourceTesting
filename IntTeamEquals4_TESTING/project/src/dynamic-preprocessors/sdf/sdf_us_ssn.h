/*
** Copyright (C) 2009-2013 Sourcefire, Inc.
**
**
** This program is free software; you can redistribute it and/or modify
** it under the terms of the GNU General Public License Version 2 as
** published by the Free Software Foundation.  You may not use, modify or
** distribute this program under any other version of the GNU General
** Public License.
**
** This program is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
** GNU General Public License for more details.
**
** You should have received a copy of the GNU General Public License
** along with this program; if not, write to the Free Software
** Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
*/

#ifndef SDF_US_SSN__H
#define SDF_US_SSN__H

struct _SDFConfig;  /* Forward declaration of SDFConfig */

int SDFSocialCheck(char *buf, uint32_t buflen, struct _SDFConfig *config);
int ParseSSNGroups(char *filename, struct _SDFConfig *config);
int SSNSetDefaultGroups(struct _SDFConfig *config);

#endif /* SDF_US_SSN__H */
