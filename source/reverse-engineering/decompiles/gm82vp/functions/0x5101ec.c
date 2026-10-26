// rea decompile_all
// name: FUN_005101ec
// address: 0x5101ec
// body: available
// range: 0x5101ec-0x5103a2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005101ec(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  MCIERROR MVar8;
  undefined4 local_18;
  undefined4 local_14;

  FUN_0050f798(param_1);
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
  uVar6 = *(uint *)(param_1 + 0x350);
  cVar1 = FUN_00510d6c(param_1);
  if (cVar1 != '\n') {
    *(uint *)(param_1 + 0x350) = uVar6 | 0x100;
LAB_00510370:
    local_18 = FUN_004c45dc(param_1);
    MVar8 = mciSendCommandW((uint)*(ushort *)(param_1 + 0x35a),0x807,*(DWORD_PTR *)(param_1 + 0x350)
                            ,(DWORD_PTR)&local_18);
    *(MCIERROR *)(param_1 + 0x36c) = MVar8;
    return;
  }
  uVar4 = FUN_00510d2c(param_1);
  FUN_00510d2c(param_1);
  uVar2 = FUN_0050d244();
  uVar5 = FUN_005106c0(param_1,uVar2);
  cVar1 = FUN_00510ce8(param_1);
  if (cVar1 != '\x02') {
    cVar1 = FUN_0050d244(uVar4);
    local_14 = uVar5;
    if (cVar1 != '\x01') {
      cVar1 = FUN_0050d248(uVar4);
      cVar3 = FUN_0050d248(uVar5);
      if (cVar1 == cVar3) {
        cVar1 = FUN_0050d250(uVar4);
        cVar3 = FUN_0050d250(uVar5);
        if (cVar1 == cVar3) {
          FUN_00510d2c(param_1);
          uVar7 = FUN_0050d244();
          local_14 = FUN_005106c0(param_1,(uVar7 & 0xff) - 1);
        }
      }
    }
    *(uint *)(param_1 + 0x350) = uVar6 | 8;
    goto LAB_00510370;
  }
  cVar1 = FUN_0050d244(uVar4);
  if (cVar1 != '\x01') {
    cVar1 = FUN_0050d248(uVar4);
    cVar3 = FUN_0050d248(uVar5);
    if (cVar1 == cVar3) {
      cVar1 = FUN_0050d250(uVar4);
      cVar3 = FUN_0050d250(uVar5);
      if (cVar1 == cVar3) {
        FUN_00510d2c(param_1);
        uVar6 = FUN_0050d244();
        uVar4 = FUN_005106c0(param_1,(uVar6 & 0xff) - 1);
        FUN_005107e4(param_1,uVar4);
        goto LAB_005102f2;
      }
    }
  }
  FUN_005107e4(param_1,uVar5);
LAB_005102f2:
  FUN_0050fc58(param_1);
  *(undefined1 *)(param_1 + 0x312) = 0;
  return;
}
