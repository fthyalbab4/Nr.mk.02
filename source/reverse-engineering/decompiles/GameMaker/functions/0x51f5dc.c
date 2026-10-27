// rea decompile_all
// name: FUN_0051f5dc
// address: 0x51f5dc
// body: available
// range: 0x51f5dc-0x51f718 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0051f5dc(int param_1,LPMSG param_2,uint param_3)

{
  uint uVar1;
  char cVar2;
  BOOL BVar3;
  char cVar4;
  undefined4 local_14;

  local_14 = param_3 & 0xffffff00;
  BVar3 = PeekMessageW(param_2,(HWND)0x0,0x200,0x20e,1);
  cVar4 = '\x01' - (BVar3 == 0);
  if (cVar4 == '\0') {
    BVar3 = PeekMessageW(param_2,(HWND)0x0,0,0,0);
    if (BVar3 == 0) goto LAB_0051f70f;
  }
  if (param_2->hwnd == (HWND)0x0) {
LAB_0051f631:
    cVar2 = '\x01';
  }
  else {
    BVar3 = IsWindowUnicode(param_2->hwnd);
    if (BVar3 != 0) goto LAB_0051f631;
    cVar2 = '\0';
  }
  local_14._0_3_ = CONCAT12(cVar2,(undefined2)local_14);
  if (cVar4 == '\0') {
    if (cVar2 == '\0') {
      BVar3 = PeekMessageA(param_2,(HWND)0x0,0,0,1);
      cVar4 = '\x01' - (BVar3 == 0);
    }
    else {
      BVar3 = PeekMessageW(param_2,(HWND)0x0,0,0,1);
      cVar4 = '\x01' - (BVar3 == 0);
    }
  }
  uVar1 = local_14;
  if (cVar4 != '\0') {
    local_14 = 1;
    if (param_2->message == 0x12) {
      *(undefined1 *)(param_1 + 0xa4) = 1;
    }
    else {
      local_14 = CONCAT22(SUB42(uVar1,2),1);
      if (*(short *)(param_1 + 0x10a) != 0) {
        (**(code **)(param_1 + 0x108))(*(undefined4 *)(param_1 + 0x10c),param_2,(int)&local_14 + 1);
      }
      cVar4 = FUN_00521480(param_1,param_2);
      if (cVar4 == '\0') {
        cVar4 = FUN_0051f488(param_1,param_2);
        if ((cVar4 == '\0') && (local_14._1_1_ == '\0')) {
          cVar4 = FUN_0051f340(param_1,param_2);
          if (cVar4 == '\0') {
            cVar4 = FUN_0051f390(param_1,param_2);
            if (cVar4 == '\0') {
              cVar4 = FUN_0051f2f8(param_1,param_2);
              if (cVar4 == '\0') {
                TranslateMessage(param_2);
                if (local_14._2_1_ == '\0') {
                  DispatchMessageA(param_2);
                }
                else {
                  DispatchMessageW(param_2);
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0051f70f:
  return local_14 & 0xff;
}
