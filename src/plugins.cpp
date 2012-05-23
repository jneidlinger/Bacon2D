/**
 * Copyright (C) 2012 by INdT
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 * @author Rodrigo Goncalves de Oliveira <rodrigo.goncalves@openbossa.org>
 * @author Roger Felipe Zanoni da Silva <roger.zanoni@openbossa.org>
 */

#include "plugins.h"

#include "animatedlayer.h"
#include "box2ddistancejointitem.h"
#include "box2ditem.h"
#include "box2dscene.h"
#include "box2dmousejointitem.h"
#include "entity.h"
#include "layers.h"
#include "scene.h"
#include "spriteanimation.h"
#include "sprite.h"
#include "staticlayer.h"
#include "game.h"
#include "viewport.h"
#include "behavior.h"
#include "scriptbehavior.h"

void Plugins::registerTypes(const char *uri)
{
    Q_UNUSED(uri)

    qmlRegisterUncreatableType<Quasi>("QuasiGame", 1, 0, "Quasi", "Exporting Quasi enums to QML");
    qmlRegisterUncreatableType<Layer>("QuasiGame", 1, 0, "Layer", "Registering Layer as we use it on QuasiLayers");
    qmlRegisterUncreatableType<Behavior>("QuasiGame", 1, 0, "QuasiBehavior", "Don't use QuasiBehavior directly, use one specialized behavior class");

    qmlRegisterType<Game>("QuasiGame", 1, 0, "QuasiGame");
    qmlRegisterType<Scene>("QuasiGame", 1, 0, "QuasiScene");
    qmlRegisterType<Entity>("QuasiGame", 1, 0, "QuasiEntity");
    qmlRegisterType<Sprite>("QuasiGame", 1, 0, "QuasiSprite");
    qmlRegisterType<SpriteAnimation>("QuasiGame", 1, 0, "QuasiSpriteAnimation");
    qmlRegisterType<Box2DScene>("QuasiGame", 1, 0, "QuasiPhysicsScene");
    qmlRegisterType<Box2DItem>("QuasiGame", 1, 0, "QuasiBody");
    qmlRegisterType<Box2DDistanceJointItem>("QuasiGame", 1, 0, "QuasiDistanceJoint");
    qmlRegisterType<Box2DMouseJointItem>("QuasiGame", 1, 0, "QuasiMouseJoint");
    qmlRegisterType<Layers>("QuasiGame", 1, 0, "QuasiLayers");
    qmlRegisterType<StaticLayer>("QuasiGame", 1, 0, "QuasiStaticLayer");
    qmlRegisterType<AnimatedLayer>("QuasiGame", 1, 0, "QuasiAnimatedLayer");
    qmlRegisterType<Viewport>("QuasiGame", 1, 0, "QuasiViewport");
    qmlRegisterType<ScriptBehavior>("QuasiGame", 1, 0, "QuasiScriptBehavior");
}

Q_EXPORT_PLUGIN2(QuasiGame, Plugins);