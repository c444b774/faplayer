package org.stagex.danmaku.activity;

import java.util.ArrayList;

import org.stagex.danmaku.R;

import android.app.Activity;
import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.view.View.OnClickListener;
import android.widget.Button;
import android.widget.EditText;

public class TestActivity extends Activity {
	/** Called when the activity is first created. */

	EditText mTextUri = null;
	Button mButtonPlay = null;

	@Override
	public void onCreate(Bundle savedInstanceState) {
		super.onCreate(savedInstanceState);
		setContentView(R.layout.test);
		mTextUri = (EditText) findViewById(R.id.test_uri);
		mButtonPlay = (Button) findViewById(R.id.test_play);
		mButtonPlay.setOnClickListener(new OnClickListener() {
			@Override
			public void onClick(View arg0) {
				String uri = mTextUri.getText().toString();
				if (uri.length() > 0) {
					Intent intent = new Intent(TestActivity.this,
							PlayerActivity.class);
					ArrayList<String> list = new ArrayList<String>();
					list.add(uri);
					Bundle bundle = new Bundle();
					bundle.putStringArrayList("list", list);
					bundle.putInt("index", 0);
					intent.putExtra("playlist", bundle);
					startActivity(intent);
				}
			}
		});
	}

}
