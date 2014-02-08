package ;

import flash.display.Sprite;
import flash.events.Event;
import flash.geom.Matrix;
import flash.geom.Rectangle;
import flash.Lib;
import flash.display.Bitmap;
import flash.display.BitmapData;
import flash.filters.BlurFilter;
import flash.geom.Point;
import flash.text.TextField;
import flash.text.TextFieldType;
/**
 * ...
 * @author Ipsilon Developments
 */

class Main extends Sprite 
{
	var inited:Bool;

	/* ENTRY POINT */
	
	function resize(e) 
	{
		if (!inited) init();
		// else (resize or orientation change)
	}
	
	function init() 
	{
		if (inited) return;
		inited = true;
		var lala:TextField = new TextField();
		lala.type = TextFieldType.INPUT;
		lala.width = 200;
		lala.height = 100;
		var gg:Sprite = new Sprite();
		gg.graphics.beginFill(0x000000);
		gg.graphics.drawRect(0, 0, 1, 100);
		gg.graphics.drawRect(0, 0, 199, 1);
		gg.graphics.drawRect(199, 0, 1, 100);
		gg.graphics.drawRect(0, 99, 199, 1);
		addChild(gg);
		addChild(lala);
		// (your code here)
		
		// Stage:
		// stage.stageWidth x stage.stageHeight @ stage.dpiScale
		
		// Assets:
		// nme.Assets.getBitmapData("img/assetname.jpg");
	}

	/* SETUP */

	public function new() 
	{
		super();	
		addEventListener(Event.ADDED_TO_STAGE, added);
	}

	function added(e) 
	{
		removeEventListener(Event.ADDED_TO_STAGE, added);
		stage.addEventListener(Event.RESIZE, resize);
		#if ios
		haxe.Timer.delay(init, 100); // iOS 6
		#else
		init();
		#end
	}
	
	public static function main() 
	{
		// static entry point
		Lib.current.stage.align = flash.display.StageAlign.TOP_LEFT;
		Lib.current.stage.scaleMode = flash.display.StageScaleMode.NO_SCALE;
		Lib.current.addChild(new Main());
	}
}
