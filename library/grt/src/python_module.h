/* 
 * Copyright (c) 2009, 2012, Oracle and/or its affiliates. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; version 2 of the
 * License.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA
 * 02110-1301  USA
 */


#ifndef __PYTHON_GRTMODULE_H__
#define __PYTHON_GRTMODULE_H__

#include <Python.h>
#include <object.h>

#include "grtpp.h"

/** Wraps a GRT module as a Python object
 */
struct PyGRTModuleObject
{
  PyObject_HEAD
  
  grt::Module *module;
};



/** Wraps a GRT module function as a Python object
 */
struct PyGRTFunctionObject
{
  PyObject_HEAD
  
  grt::Module *module;
  const grt::Module::Function *function;
};


#endif
