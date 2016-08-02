Pod::Spec.new do |s|
  s.name         = "HNKServerFacade"
  s.version      = "0.3.3"
  s.summary      = "Simple server interface for iOS"
  s.homepage     = "https://github.com/hkellaway/HNKServerFacade"
  s.license      = { :type => "MIT", :file => "LICENSE" }
  s.author       = { "Harlan Kellaway" => "hello@harlankellaway.com" }
  s.source       = { :git => "https://github.com/hkellaway/HNKServerFacade.git", :tag => s.version.to_s }
  
  s.platform     = :ios, "7.0"
  s.requires_arc = true

  s.source_files  = 'Pod/Classes'

  s.dependency "AFNetworking"

end
