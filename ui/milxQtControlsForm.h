/*=========================================================================
The Software is copyright (c) Commonwealth Scientific and Industrial Research Organisation (CSIRO)
ABN 41 687 119 230.
All rights reserved.

Licensed under the CSIRO BSD 3-Clause License
You may not use this file except in compliance with the License.
You may obtain a copy of the License in the file LICENSE.md or at

https://stash.csiro.au/projects/SMILI/repos/smili/browse/license.txt

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
=========================================================================*/
#ifndef MILXQTCONTROLSFORM_H
#define MILXQTCONTROLSFORM_H

#include <QCloseEvent>
#include "ui_controls.h"
#include "milxQtAliases.h"

/*!
    \class milxQtControlsForm
    \brief This class represents the controls form.

    This displays the controls for sMILX.
*/
class MILXQT_EXPORT milxQtControlsForm : public QDialog
{
    Q_OBJECT

public:
    milxQtControlsForm(QWidget *theParent = 0);
    virtual ~milxQtControlsForm();

	static QString title;

protected:
    Ui::dlgControls ui;

    void closeEvent(QCloseEvent *event);
};

#endif // MILXQTCONTROLSFORM_H
