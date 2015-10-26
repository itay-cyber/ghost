/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                                                                           *
 *  Ghost, a micro-kernel based operating system for the x86 architecture    *
 *  Copyright (C) 2015, Max Schlüssel <lokoxe@gmail.com>                     *
 *                                                                           *
 *  This program is free software: you can redistribute it and/or modify     *
 *  it under the terms of the GNU General Public License as published by     *
 *  the Free Software Foundation, either version 3 of the License, or        *
 *  (at your option) any later version.                                      *
 *                                                                           *
 *  This program is distributed in the hope that it will be useful,          *
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of           *
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the            *
 *  GNU General Public License for more details.                             *
 *                                                                           *
 *  You should have received a copy of the GNU General Public License        *
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.    *
 *                                                                           *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifndef __ACTION_COMPONENT__
#define __ACTION_COMPONENT__

#include <ghost.h>
#include <string>
#include <list>

/**
 * An action component is capable of being observed by an action listener.
 * The component may fire actions which are dispatched to the registered
 * listener for processing.
 */
class action_component_t {
private:
	g_pid process;
	uint32_t listener_id;

public:
	/**
	 *
	 */
	action_component_t() :
			process(-1), listener_id(-1) {
	}

	/**
	 *
	 */
	virtual ~action_component_t() {
	}

	/**
	 *
	 */
	virtual void setActionListener(g_pid process, uint32_t listener_id);

	/**
	 *
	 */
	virtual void fireAction();
};

#endif
