Pod::Spec.new do |s|
  s.name         = "MCPlayerKit"
  s.version      = "0.0.5"
  s.summary      = "MCPlayerKit is iOS Player, PlayerCoreType: AVPlayer can use play some video, IJKPlayer type can play video, Live ..."
  s.homepage     = "https://github.com/poholo/PlayerKit"
  s.license          = { :type => "MIT", :file => "LICENSE" }
  s.author           = { "littleplayer" => "mailjiancheng@163.com" }
  s.social_media_url   = "https://weibo.com/lp927"

  s.requires_arc = true

  s.platform     = :ios, "8.0"
  s.source       = { :git => "https://github.com/poholo/PlayerKit.git", :tag => "#{s.version}" }


  s.source_files = "SDK/Classes/**/*.{h,m,mm}",
                   "SDK/Classes/*.{h,m,mm}"                  
  s.public_header_files = "SDK/Classes/**/*.h"
                          "SDK/Classes/*.h"
  s.xcconfig = {
       'VALID_ARCHS' => 'arm64 x86_64',
  }
  s.pod_target_xcconfig = {
        'VALID_ARCHS' => 'arm64 x86_64'
  }

  s.dependency "IJKMediaFramework"
  s.frameworks = "UIKit", "Foundation", "VideoToolbox", "QuartzCore", "OpenGLES", "MobileCoreServices", 
                 "MediaPlayer", "CoreVideo", "CoreMedia", "CoreGraphics", "AVFoundation", "AudioToolbox"

end
