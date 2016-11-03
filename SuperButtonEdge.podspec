

Pod::Spec.new do |s|

  s.name         = "SuperButtonEdge"
  s.version      = "0.0.1"
  s.summary      = "buttontitle和图片位置以及间距."

  s.description  = <<-DESC
	buttontitle和图片位置以及间距的自定义
                   DESC

  s.homepage     = "https://github.com/Super-sweet/SuperButtonEdge"

  s.license      = { :type => "MIT", :file => "LICENSE" }


  s.author             = { "Super-sweet" => "347393193@qq.com" }
  s.platform     = :ios, "5.0"


  s.source       = { :git => "https://github.com/Super-sweet/SuperButtonEdge.git", :tag => "{s.version}" }


  s.source_files  = "SuperButtonEdge.{h,m}"
  s.framework    = "UIKit"
  s.requires_arc = true


end
