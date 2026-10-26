// rea decompile_all
// name: FUN_00570a80
// address: 0x570a80
// body: available
// range: 0x570a80-0x570e7a inclusive
// range: 0x570e93-0x570e9b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x570e5b (push 0x570e7b followed by fs-segment stack chaining); handler 0x570e7b lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00570a80(int *param_1,undefined4 param_2,ushort param_3,undefined4 param_4,
                 undefined4 param_5)

{
  char cVar1;
  int iVar2;
  HWND pHVar3;
  undefined4 *in_FS_OFFSET;
  UINT_PTR UVar4;
  undefined4 uVar5;
  UINT UVar6;
  TIMERPROC pTVar7;
  undefined1 local_8c [100];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_15;
  int local_14;
  int local_10;
  ushort local_a;
  int *local_8;

  local_15 = 0;
  local_a = param_3;
  local_8 = param_1;
  FUN_00571c98(param_1);
  if (((*(byte *)(local_8 + 7) & 0x10) == 0) &&
     ((cVar1 = FUN_00405d08(local_8), cVar1 != '\0' || (iVar2 = FUN_00513780(local_8,1), iVar2 == 0)
      ))) {
    (**(code **)(*local_8 + 0xe8))();
    cVar1 = FUN_0056c8b4(local_8);
    if (cVar1 == '\0') {
      FUN_004ee920(local_8,0);
      return;
    }
  }
  if (((char)param_2 == '\0') && ((local_a & 0x40) != 0)) {
    FUN_00405d08(local_8);
  }
  else if ((char)param_2 == '\0') {
    FUN_0056dcec(local_8,local_8c);
    (**(code **)(*local_8 + 0xf0))(local_8,param_5,param_4,local_8c,local_8 + 0xb6);
    if ((char)local_8[0xc6] != '\0') {
      if (((char)local_8[0xc6] == '\x03') && (cVar1 = FUN_00405d08(local_8), cVar1 != '\0')) {
        iVar2 = FUN_004edf8c(local_8);
        local_8[0xb5] = iVar2 - local_8[0xb5];
      }
      FUN_0056e710(local_8,local_8c);
      return;
    }
    FUN_0056dc90(local_8,param_5,param_4);
    if ((local_14 < local_8[0xa7]) || (local_10 < local_8[0xa8])) {
      if ((local_8[0xca] != -1) || (local_8[0xcb] != -1)) {
        *(undefined1 *)(local_8 + 0xcc) = 1;
        *(undefined1 *)((int)local_8 + 0x331) = 0;
        FUN_0056f0fc(local_8,local_8[0xca],local_8[0xcb]);
      }
      if (((((*(byte *)((int)local_8 + 0x2b5) & 1) == 0) || (local_14 < 0)) ||
          (local_8[0xa7] <= local_14)) || (local_10 < local_8[0xa8])) {
        if ((((*(byte *)((int)local_8 + 0x2b5) & 2) != 0) && (-1 < local_10)) &&
           ((local_10 < local_8[0xa8] && (local_8[0xa7] <= local_14)))) {
          local_8[0xb7] = local_14;
          local_8[0xb8] = local_14;
          local_28 = param_5;
          local_24 = param_4;
          cVar1 = FUN_00405d08(local_8,local_8 + 0xb7,local_8 + 0xb8);
          if (cVar1 != '\0') {
            *(undefined1 *)(local_8 + 0xc6) = 5;
            (**(code **)(*local_8 + 0x9c))();
            FUN_0056ec74(local_8);
            local_15 = 1;
            pTVar7 = (TIMERPROC)0x0;
            UVar6 = 0x3c;
            UVar4 = 1;
            pHVar3 = (HWND)FUN_004f76a8(local_8);
            SetTimer(pHVar3,UVar4,UVar6,pTVar7);
          }
        }
      }
      else {
        local_8[0xb7] = local_10;
        local_8[0xb8] = local_10;
        local_20 = param_5;
        local_1c = param_4;
        cVar1 = FUN_00405d08(local_8,local_8 + 0xb7,local_8 + 0xb8);
        if (cVar1 != '\0') {
          *(undefined1 *)(local_8 + 0xc6) = 4;
          (**(code **)(*local_8 + 0x9c))();
          FUN_0056ec74(local_8);
          local_15 = 1;
          pTVar7 = (TIMERPROC)0x0;
          UVar6 = 0x3c;
          UVar4 = 1;
          pHVar3 = (HWND)FUN_004f76a8(local_8);
          SetTimer(pHVar3,UVar4,UVar6,pTVar7);
        }
      }
    }
    else if ((*(byte *)((int)local_8 + 0x2b5) & 4) == 0) {
      *(undefined1 *)(local_8 + 0xc6) = 1;
      pTVar7 = (TIMERPROC)0x0;
      UVar6 = 0x3c;
      UVar4 = 1;
      pHVar3 = (HWND)FUN_004f76a8(local_8);
      SetTimer(pHVar3,UVar4,UVar6,pTVar7);
      if ((local_a & 1) == 0) {
        FUN_0056f840(local_8,local_14,local_10);
      }
      else {
        FUN_0056f7bc(local_8,&local_14);
      }
    }
    else {
      if ((local_8[0xa2] == local_14) && (local_8[0xa3] == local_10)) {
        FUN_0056c9a4(local_8);
      }
      else {
        FUN_0056f840(local_8,local_14,local_10);
        FUN_00571d74(local_8);
      }
      FUN_00405d08(local_8);
    }
  }
  uVar5 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffff5c;
  FUN_004f0524(local_8,param_2,local_a,param_4,param_5);
  *in_FS_OFFSET = uVar5;
  return;
}
