// Copyright (c) 2014-2017 Thomas Fussell
// Copyright (c) 2010-2015 openpyxl
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, WRISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE
//
// @license: http://www.opensource.org/licenses/mit-license.php
// @author: see AUTHORS file


#include <xlnt/workbook/defined_name.hpp>

namespace xlnt
{

/// <summary>
/// work book definedName  class :
/// This element defines the defined names that are defined within this workbook.
/// Defined names are descriptive text that is used to represents a cell, range of cells,
/// formula, or constant value. Use easy-to-understand names,
/// such as Products, to refer to hard to understand ranges, such as Sales!C20:C30.

defined_name::defined_name()
{
}

defined_name::defined_name (const defined_name& name)
{
    *this = name;
}

defined_name& defined_name::operator= (const defined_name& name)
{
    this->name_ = name.name_;
    this->value_ = name.value_;
    if(name.comment_.is_set() ) this->comment_= name.comment_.get();
    if(name.customMenu_.is_set()) this->customMenu_ = name.customMenu_.get();
    return *this;
}

defined_name::~defined_name ()
{
}

///
/// value
///
const std::string& defined_name::value () const
{
    return value_;
}

std::string& defined_name::value ()
{
    return value_ ;
}

void defined_name::name (const std::string& value)
{
    value_ = value;
}


///
/// comment
///

const std::string& defined_name::comment () const
{
    return comment_.get();
}

std::string& defined_name::comment ()
{
    return comment_.get();
}

void defined_name::comment (const std::string& comment)
{
    comment_ = comment;
}

bool defined_name::has_comment () const
{
    return comment_.is_set();
}

///
/// customMenu
///

const std::string&  defined_name::customMenu () const
{
    return customMenu_.get();
}

std::string&  defined_name::customMenu ()
{
    return customMenu_.get();
}

void defined_name::customMenu (const ::std::string& customMenu)
{
    customMenu_ = customMenu;
}

bool defined_name::has_customMenu () const
{
    return customMenu_.is_set();

}

///
/// description
///

const std::string& defined_name::description () const
{
    return description_.get() ;
}

std::string& defined_name::description ()
{
    return description_.get() ;

}

void defined_name::description (const std::string& description)
{
    description_ = description;
}

bool defined_name::has_description () const
{
    return description_.is_set();
}

///
/// help
///

const std::string& defined_name::help () const
{
    return help_.get();
}

std::string& defined_name::help ()
{
    return help_.get();
}

void defined_name::help (const ::std::string& help)
{
    help_ = help;

}

bool defined_name::has_help()
{
    return help_.is_set();
}

///
/// statusBar
///

const std::string& defined_name::statusBar () const
{
    return statusBar_.get();
}

std::string& defined_name::statusBar ()
{
    return statusBar_.get();
}

void defined_name::statusBar (const std::string& statusBar)
{
    statusBar_ = statusBar;
}

bool defined_name::has_statusBar()
{
    return statusBar_.is_set();
}
///
/// localSheetId
///
unsigned int defined_name::localSheetId () const
{
    return localSheetId_.get();
}

unsigned int& defined_name::localSheetId ()
{
    return localSheetId_.get();
}

void defined_name::localSheetId (unsigned int localSheetId)
{
    localSheetId_ = localSheetId;
}

bool defined_name::has_localSheetId ()
{
    return localSheetId_.is_set();
}
///
/// hidden
///
bool defined_name::hidden () const
{
    return hidden_;
}

void  defined_name::hidden (bool hidden)
{
    hidden_ = hidden;
}

///
/// function
///

bool defined_name::function () const
{
    return function_;
}

void  defined_name::function (bool function)
{
    function_ = function ;
}

///
/// vbProcedure
///

bool defined_name::vbProcedure () const
{
    return vbProcedure_;
}

void  defined_name::vbProcedure (bool vbProcedure)
{
    vbProcedure_ = vbProcedure;
}

///
/// xlm
///

bool defined_name::xlm () const
{
    return xlm_;
}

void  defined_name::xlm (bool xlm)
{
    xlm_ = xlm;
}

///
/// functionGroupId
///

unsigned int defined_name::functionGroupId () const
{
    return functionGroupId_.get();
}

unsigned int& defined_name::functionGroupId ()
{
    return functionGroupId_.get();
}

void defined_name::functionGroupId (unsigned int functionGroupId)
{
    functionGroupId_=functionGroupId;
}

bool defined_name::has_functionGroupID ()
{
    return functionGroupId_.is_set();
}
///
/// shortcutKey
///

const std::string& defined_name::shortcutKey () const
{
    return shortcutKey_.get();
}

std::string&  defined_name::shortcutKey ()
{
    return shortcutKey_.get();
}

void defined_name::shortcutKey (const std::string& shortcutKey)
{
    shortcutKey_ = shortcutKey;
}

bool defined_name::has_shortcutKey()
{
    return shortcutKey_.is_set();
}
///
/// publishToServer
///

bool defined_name::publishToServer () const
{
    return publishToServer_;
}

void defined_name::publishToServer (bool publishToServer)
{
    publishToServer_ = publishToServer;
}

///
/// workbookParameter
///
bool defined_name::workbookParameter () const
{
    return workbookParameter_;
}

void defined_name::workbookParameter (bool workbookParameter)
{
    workbookParameter_= workbookParameter;
}

} // namespace xlnt
