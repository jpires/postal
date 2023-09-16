cmake_minimum_required(VERSION 3.12)

project(postal)

find_package(SDL2 CONFIG REQUIRED)

add_executable(postal
        Anim3D.cpp
        AnimThing.cpp
        BufQ.cpp
        GameSettings.cpp
        IdBank.cpp
        InputSettings.cpp
        InputSettingsDlg.cpp
        Log.cpp
        MemFileFest.cpp
        MenuSettings.cpp
        MenuTrans.cpp
        NetBrowse.cpp
        NetClient.cpp
        NetDlg.cpp
        NetServer.cpp
        Personatorium.cpp
        PowerUp.cpp
        ProtoBSDIP.cpp
        SampleMaster.cpp
        SndRelay.cpp
        SoundThing.cpp
        StockPile.cpp
        TexEdit.cpp
        Thing3d.cpp
        TriggerRegions.cpp
        aivars.cpp
        alphablitforpostal.cpp
        ball.cpp
        band.cpp
        barrel.cpp
        bouy.cpp
        bulletFest.cpp
        camera.cpp
        character.cpp
        chunk.cpp
        crawler.cpp
        credits.cpp
        cutscene.cpp
        deathWad.cpp
        demon.cpp
        dispenser.cpp
        doofus.cpp
        dude.cpp
        encrypt.cpp
        explode.cpp
        fire.cpp
        fireball.cpp
        firebomb.cpp
        flag.cpp
        flagbase.cpp
        game.cpp
        gameedit.cpp
        grenade.cpp
        grip.cpp
        heatseeker.cpp
        hood.cpp
        input.cpp
        item3d.cpp
        keys.cpp
        localize.cpp
        logtab.cpp
        main.cpp
        menus.cpp
        mine.cpp
        napalm.cpp
        navnet.cpp
        net.cpp
        netmsgr.cpp
        organ.cpp
        ostrich.cpp
        person.cpp
        play.cpp
        pylon.cpp
        realm.cpp
        rocket.cpp
        scene.cpp
        score.cpp
        sentry.cpp
        settings.cpp
        smash.cpp
        socket.cpp
        thing.cpp
        title.cpp
        toolbar.cpp
        trigger.cpp
        update.cpp
        warp.cpp
        weapon.cpp
        yatime.cpp
        RSPiX/Src/BLUE/unix/Bdebug.cpp
        RSPiX/Src/BLUE/unix/Bjoy.cpp
        RSPiX/Src/BLUE/unix/Bkey.cpp
        RSPiX/Src/BLUE/unix/Bmain.cpp
        RSPiX/Src/BLUE/unix/Bmouse.cpp
        RSPiX/Src/BLUE/unix/Btime.cpp
        RSPiX/Src/BLUE/unix/Bdisp.cpp
        RSPiX/Src/BLUE/unix/Bsound.cpp
        RSPiX/Src/GREEN/Hot/hot.cpp
        RSPiX/Src/GREEN/Image/Image.cpp
        RSPiX/Src/GREEN/Image/Imagecon.cpp
        RSPiX/Src/GREEN/Image/ImageFile.cpp
        RSPiX/Src/GREEN/InputEvent/InputEvent.cpp
        RSPiX/Src/GREEN/Mix/mix.cpp
        RSPiX/Src/GREEN/Mix/MixBuf.cpp
        RSPiX/Src/GREEN/Image/pal.cpp
        RSPiX/Src/GREEN/Image/PalFile.cpp
        RSPiX/Src/GREEN/Sample/sample.cpp
        RSPiX/Src/GREEN/Snd/snd.cpp
        RSPiX/Src/GREEN/SndFx/SndFx.cpp
        RSPiX/Src/GREEN/Task/task.cpp
        RSPiX/Src/GREEN/3D/pipeline.cpp
        RSPiX/Src/GREEN/3D/render.cpp
        RSPiX/Src/GREEN/3D/types3d.cpp
        RSPiX/Src/GREEN/3D/zbuffer.cpp
        RSPiX/Src/GREEN/BLiT/alphablit.cpp
        RSPiX/Src/GREEN/BLiT/BLIT.cpp
        RSPiX/Src/GREEN/BLiT/BLITINIT.cpp
        RSPiX/Src/GREEN/BLiT/BLiTT.cpp
        RSPiX/Src/GREEN/BLiT/CFNT.cpp
        RSPiX/Src/GREEN/BLiT/Fspr1.cpp
        RSPiX/Src/GREEN/BLiT/FSPR8.cpp
        RSPiX/Src/GREEN/BLiT/line.cpp
        RSPiX/Src/GREEN/BLiT/mono.cpp
        RSPiX/Src/GREEN/BLiT/Rotate96.cpp
        RSPiX/Src/GREEN/BLiT/RPrint.cpp
        RSPiX/Src/GREEN/BLiT/ScaleFlat.cpp
        RSPiX/Src/ORANGE/GameLib/ANIMSPRT.cpp
        RSPiX/Src/ORANGE/Attribute/attribute.cpp
        RSPiX/Src/ORANGE/GUI/btn.cpp
        RSPiX/Src/ORANGE/Channel/channel.cpp
        RSPiX/Src/ORANGE/color/colormatch.cpp
        RSPiX/Src/ORANGE/DirtRect/DirtRect.cpp
        RSPiX/Src/ORANGE/color/dithermatch.cpp
        RSPiX/Src/ORANGE/GUI/dlg.cpp
        RSPiX/Src/ORANGE/GUI/edit.cpp
        RSPiX/Src/ORANGE/File/file.cpp
        RSPiX/Src/ORANGE/QuickMath/FixedPoint.cpp
        RSPiX/Src/ORANGE/GUI/guiItem.cpp
        RSPiX/Src/ORANGE/IFF/iff.cpp
        RSPiX/Src/ORANGE/ImageTools/lasso.cpp
        RSPiX/Src/ORANGE/Laymage/laymage.cpp
        RSPiX/Src/ORANGE/GUI/ListBox.cpp
        RSPiX/Src/ORANGE/GUI/ListContents.cpp
        RSPiX/Src/ORANGE/Meter/meter.cpp
        RSPiX/Src/ORANGE/MsgBox/MsgBox.cpp
        RSPiX/Src/ORANGE/GUI/MultiBtn.cpp
        RSPiX/Src/ORANGE/MultiGrid/MultiGrid.cpp
        RSPiX/Src/ORANGE/MultiGrid/MultiGridIndirect.cpp
        RSPiX/Src/ORANGE/GUI/ProcessGui.cpp
        RSPiX/Src/ORANGE/Debug/profile.cpp
        RSPiX/Src/ORANGE/GUI/PushBtn.cpp
        RSPiX/Src/ORANGE/QuickMath/QuickMath.cpp
        RSPiX/Src/ORANGE/GameLib/Region.cpp
        RSPiX/Src/ORANGE/RString/rstring.cpp
        RSPiX/Src/ORANGE/GUI/scrollbar.cpp
        RSPiX/Src/ORANGE/GameLib/SHAPES.cpp
        RSPiX/Src/ORANGE/Parse/SimpleBatch.cpp
        RSPiX/Src/ORANGE/GameLib/SPRITE.cpp
        RSPiX/Src/ORANGE/str/str.cpp
        RSPiX/Src/ORANGE/GUI/txt.cpp
        RSPiX/Src/CYAN/Unix/uDialog.cpp
        RSPiX/Src/CYAN/Unix/uColors.cpp
        RSPiX/Src/CYAN/Unix/uPath.cpp
        WishPiX/Menu/menu.cpp
        WishPiX/Prefs/prefline.cpp
        WishPiX/Prefs/prefs.cpp
        WishPiX/ResourceManager/resmgr.cpp
        WishPiX/Spry/spry.cpp
)

set_property(TARGET postal PROPERTY CXX_STANDARD 20)

target_compile_options(postal PRIVATE -fsigned-char)
target_compile_options(postal PRIVATE -w)

if (${CMAKE_SYSTEM_NAME} MATCHES "Linux")
    target_compile_definitions(postal PRIVATE
            PLATFORM_UNIX
    )
elseif (${CMAKE_SYSTEM_NAME} MATCHES "Darwin")
    target_compile_definitions(postal PRIVATE
            PLATFORM_UNIX
            PLATFORM_MACOS
    )
endif ()
target_compile_definitions(postal PRIVATE LOCALE=US)
target_compile_definitions(postal PRIVATE TARGET=POSTAL_2015)
target_compile_definitions(postal PRIVATE ALLOW_TWINSTICK)

target_include_directories(postal PRIVATE
        .
        RSPiX
        RSPiX/Inc
        RSPiX/Src
        RSPiX/Src/BLUE
        RSPiX/Src/BLUE/unix
        RSPiX/Src/CYAN
        RSPiX/Src/CYAN/Unix
        RSPiX/Src/ORANGE
        RSPiX/Src/ORANGE/CDT
        RSPiX/Src/ORANGE/GameLib
        RSPiX/Src/ORANGE/File
        RSPiX/Src/ORANGE/Multigrid
        RSPiX/Src/GREEN/Image
        WishPiX
        WishPiX/Spry
)

target_link_libraries(postal PRIVATE
        SDL2::SDL2
)