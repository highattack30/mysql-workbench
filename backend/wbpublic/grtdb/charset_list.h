/* 
 * Copyright (c) 2007, 2014, Oracle and/or its affiliates. All rights reserved.
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
#ifndef _CHARSET_LIST_H_
#define _CHARSET_LIST_H_

#include <grtpp.h>
#include "grt/tree_model.h"

namespace bec {
  
  class CharsetList : public ListModel {
  public:
    CharsetList(grt::GRT *grt, const std::string &path);

    enum CharsetListColumns {
      Name
    };

    virtual size_t count_children(const NodeId &parent);
    virtual bool get_field(const NodeId &node, ColumnId column, std::string &value);
    virtual std::string get_field_description(const NodeId &node, ColumnId column);
    void picked_charset(const NodeId &node);

  protected:
    grt::GRT *_grt;
    
    std::list<size_t> _recently_used;
    std::string _charset_list_path;
  };
  
};

#endif /* _CHARSET_LIST_H_ */
