package abi46_0_0.expo.modules.sms

import android.content.Context
import abi46_0_0.expo.modules.core.BasePackage
import abi46_0_0.expo.modules.core.ExportedModule

class SMSPackage : BasePackage() {
  override fun createExportedModules(reactContext: Context): List<ExportedModule> {
    return listOf(SMSModule(reactContext))
  }
}
