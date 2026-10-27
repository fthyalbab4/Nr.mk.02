// rea decompile_all
// name: FUN_005acab4
// address: 0x5acab4
// body: available
// range: 0x5acab4-0x5acc35 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005acab4(int param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  MCIERROR MVar6;
  undefined4 local_14;
  undefined4 local_10;

  FUN_005ac1e4(param_1);
  *(undefined4 *)(param_1 + 0x350) = 0;
  if (*(char *)(param_1 + 0x356) == '\0') {
    *(undefined4 *)(param_1 + 0x350) = 2;
  }
  else {
    if (*(char *)(param_1 + 0x354) != '\0') {
      *(undefined4 *)(param_1 + 0x350) = 2;
    }
    *(undefined1 *)(param_1 + 0x356) = 0;
  }
  if (*(char *)(param_1 + 0x357) != '\0') {
    if (*(char *)(param_1 + 0x355) != '\0') {
      *(uint *)(param_1 + 0x350) = *(uint *)(param_1 + 0x350) | 1;
    }
    *(undefined1 *)(param_1 + 0x357) = 0;
  }
  uVar2 = *(uint *)(param_1 + 0x350);
  cVar1 = FUN_005ad7b8(param_1);
  if (cVar1 == '\n') {
    cVar1 = FUN_005ad734(param_1);
    if (cVar1 == '\x02') {
      FUN_005ad778(param_1);
      uVar2 = FUN_00526f38();
      uVar3 = FUN_005ad6ec(param_1);
      if ((uVar2 & 0xff) == uVar3) {
        uVar4 = FUN_005ad6ec(param_1);
        uVar4 = FUN_005ad10c(param_1,uVar4);
        FUN_005ad230(param_1,uVar4);
      }
      else {
        FUN_005ad778(param_1);
        uVar2 = FUN_00526f38();
        uVar4 = FUN_005ad10c(param_1,(uVar2 & 0xff) + 1);
        FUN_005ad230(param_1,uVar4);
      }
      FUN_005ac6a4(param_1);
      *(undefined1 *)(param_1 + 0x312) = 0;
      return;
    }
    FUN_005ad778(param_1);
    uVar3 = FUN_00526f38();
    uVar5 = FUN_005ad6ec(param_1);
    if ((uVar3 & 0xff) == uVar5) {
      uVar4 = FUN_005ad6ec(param_1);
      local_10 = FUN_005ad10c(param_1,uVar4);
    }
    else {
      FUN_005ad778(param_1);
      uVar3 = FUN_00526f38();
      local_10 = FUN_005ad10c(param_1,(uVar3 & 0xff) + 1);
    }
    *(uint *)(param_1 + 0x350) = uVar2 | 8;
  }
  else {
    *(uint *)(param_1 + 0x350) = uVar2 | 0x200;
  }
  local_14 = FUN_004f76a8(param_1);
  MVar6 = mciSendCommandW((uint)*(ushort *)(param_1 + 0x35a),0x807,*(DWORD_PTR *)(param_1 + 0x350),
                          (DWORD_PTR)&local_14);
  *(MCIERROR *)(param_1 + 0x36c) = MVar6;
  return;
}
