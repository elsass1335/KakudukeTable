# include <Siv3D.hpp> // Siv3D v0.6.12

void Main()
{
	// 背景の色を設定する | Set the background color
	Scene::SetBackground(ColorF{ 0.6, 0.8, 0.7 });

	// RankName Image
	const Texture ichiryu{ U"engine/01_ichiryu.png" };
	const Texture futsu{ U"engine/02_Futsu.png" };
	const Texture niryu{ U"engine/03_niryu.png" };
	const Texture hoketsu{ U"engine/04_Hoketsu.png" };
	const Texture kachinashi{ U"engine/05_Kachinashi.png" };

	// Group Image
	const Texture A{ U"engine/11_A.png" };
	const Texture B{ U"engine/12_B.png" };
	const Texture C{ U"engine/13_C.png" };
	const Texture D{ U"engine/14_D.png" };
	const Texture E{ U"engine/15_E.png" };
	const Texture F{ U"engine/16_F.png" };

	// RankName 配列
	const Array<Texture> rank = {
		ichiryu, futsu, niryu, hoketsu, kachinashi
	};

	const Array<Texture> group = {
		A, B, C, D, E, F
	};

	// Positions of GroupRect
	Array<int32> post = {
		0, 0, 0, 0, 0, 0
	};


	// 太文字のフォントを作成する | Create a bold font with MSDF method
	const Font font{ FontMethod::MSDF, 48, Typeface::Bold };

	while (System::Update())
	{
		

		// Draw RankImage
		for (int32 i = 0; i < rank.size(); i++)
		{
			rank[i].draw(100 + i * 120, 20);
		}

		// Draw GroupImage
		for (int32 i = 0; i < group.size(); i++)
		{
			group[i].draw(100 + post[i] * 120, 80 + i * 60);
		}

		// Draw Lines
		// Line(220, 20, 220, 510).draw(4, Palette::Black);
		// Line(100, 20, 700, 20).draw(4, Palette::Black);

		for (int i = 0; i < rank.size()+1; i++)
		{
			Line(100 + i * 120, 20, 100 + i * 120, 440).draw(4, Palette::Black);
		}

		for (int i = 0; i < group.size() + 2; i++)
		{
			Line(100, 20 + i * 60, 700, 20 + i * 60).draw(4, Palette::Black);
		}

		// ボタン | Button
		// A
		if (SimpleGUI::Button(U"<", Vec2{ 25, 90 }))
		{
			if (post[0] == 0)
			{
				continue;
			}
			else
			{
				post[0] = post[0] - 1;
			}
		}
		if (SimpleGUI::Button(U">", Vec2{ 750, 90 }))
		{
			if (post[0] == 4)
			{
				continue;
			}
			else
			{
				post[0] = post[0] + 1;
			}
		}

		// B
		if (SimpleGUI::Button(U"<", Vec2{ 25, 150 }))
		{
			if (post[1] == 0)
			{
				continue;
			}
			else
			{
				post[1] = post[1] - 1;
			}
		}
		if (SimpleGUI::Button(U">", Vec2{ 750, 150 }))
		{
			if (post[1] == 4)
			{
				continue;
			}
			else
			{
				post[1] = post[1] + 1;
			}
		}

		// C
		if (SimpleGUI::Button(U"<", Vec2{ 25, 210 }))
		{
			if (post[2] == 0)
			{
				continue;
			}
			else
			{
				post[2] = post[2] - 1;
			}
		}
		if (SimpleGUI::Button(U">", Vec2{ 750, 210 }))
		{
			if (post[2] == 4)
			{
				continue;
			}
			else
			{
				post[2] = post[2] + 1;
			}
		}

		// D
		if (SimpleGUI::Button(U"<", Vec2{ 25, 270 }))
		{
			if (post[3] == 0)
			{
				continue;
			}
			else
			{
				post[3] = post[3] - 1;
			}
		}
		if (SimpleGUI::Button(U">", Vec2{ 750, 270 }))
		{
			if (post[3] == 4)
			{
				continue;
			}
			else
			{
				post[3] = post[3] + 1;
			}
		}

		// E
		if (SimpleGUI::Button(U"<", Vec2{ 25, 330 }))
		{
			if (post[4] == 0)
			{
				continue;
			}
			else
			{
				post[4] = post[4] - 1;
			}
		}
		if (SimpleGUI::Button(U">", Vec2{ 750, 330 }))
		{
			if (post[4] == 4)
			{
				continue;
			}
			else
			{
				post[4] = post[4] + 1;
			}
		}

		// F
		if (SimpleGUI::Button(U"<", Vec2{ 25, 390 }))
		{
			if (post[5] == 0)
			{
				continue;
			}
			else
			{
				post[5] = post[5] - 1;
			}
		}
		if (SimpleGUI::Button(U">", Vec2{ 750, 390 }))
		{
			if (post[5] == 4)
			{
				continue;
			}
			else
			{
				post[5] = post[5] + 1;
			}
		}
	}
}

//
// - Debug ビルド: プログラムの最適化を減らす代わりに、エラーやクラッシュ時に詳細な情報を得られます。
//
// - Release ビルド: 最大限の最適化でビルドします。
//
// - [デバッグ] メニュー → [デバッグの開始] でプログラムを実行すると、[出力] ウィンドウに詳細なログが表示され、エラーの原因を探せます。
//
// - Visual Studio を更新した直後は、プログラムのリビルド（[ビルド]メニュー → [ソリューションのリビルド]）が必要な場合があります。
//
