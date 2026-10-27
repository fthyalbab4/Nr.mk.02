// rea decompile_all
// name: FUN_00491320
// address: 0x491320
// body: available
// range: 0x491320-0x491553 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x491359 (push 0x491554 followed by fs-segment stack chaining); handler 0x491554 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00491320(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  int local_2024;
  undefined1 local_2020 [2];
  undefined2 auStack_201e [2029];
  undefined4 uStack_1044;
  int *piStack_1040;
  undefined4 uStack_103c;
  undefined1 *puStack_1038;
  undefined1 *puStack_1034;
  int local_20;
  undefined4 local_1c;
  byte local_18;
  byte local_17;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;

  puStack_1034 = &stack0xfffffffc;
  iVar4 = 2;
  do {
    iVar3 = iVar4;
    iVar4 = iVar3 + -1;
  } while (iVar3 + -1 != 0);
  local_2024 = 0;
  local_8 = 0;
  puStack_1038 = &LAB_00491554;
  uStack_103c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_103c;
  piStack_1040 = (int *)0x491369;
  local_c = param_2;
  iVar4 = FUN_00438ec4(*(undefined4 *)(iVar3 + 0x288),param_3);
  piStack_1040 = (int *)0x491378;
  cVar2 = FUN_004061f8(iVar4,&PTR_LAB_00488b04);
  local_14 = iVar4;
  if (cVar2 == '\0') {
    piStack_1040 = (int *)0x4914e6;
    FUN_00404f38(&local_20,0x14,0);
    local_17 = DAT_006813e6;
    local_20 = *(int *)(iVar4 + 0x48);
    local_1c = 0xffffffff;
    if ((*(char *)(iVar4 + 0x59) == '\0') && ((*(byte *)(iVar4 + 0x1c) & 0x10) == 0)) {
      local_18 = local_18 | DAT_006813d6;
    }
    local_10 = 0xffffffff;
  }
  else {
    piStack_1040 = (int *)0x49138f;
    FUN_00404f38(&local_20,0x14,0);
    if ((byte)(*(byte *)(iVar4 + 0x1c6) - 3) < 2) {
      local_20 = *(int *)(iVar4 + 0x48);
    }
    else {
      local_20 = *(int *)(iVar4 + 0x1b4);
      if (local_20 < 0) {
        local_20 = -2;
      }
    }
    local_17 = (&DAT_006813e0)[(*(byte *)(iVar4 + 0x1c6) & 0x7f) * 2];
    local_1c = param_3;
    if (*(char *)(iVar4 + 0x1b1) != '\0') {
      piStack_1040 = (int *)0x4913e2;
      iVar5 = FUN_0048b734();
      if (0x40046 < iVar5) {
        local_17 = local_17 | 0x10;
      }
    }
    piStack_1040 = (int *)0x4913f4;
    local_18 = FUN_0048ffdc(iVar4);
    if (*(char *)(iVar4 + 0x1b3) != '\0') {
      local_17 = local_17 | 4;
    }
    if ((*(char *)(iVar3 + 0x2a8) == '\0') &&
       ((*(char *)(iVar3 + 0x27c) == '\0' || (*(char *)(iVar4 + 0x1c6) != '\x05')))) {
      local_10 = 0xffffffff;
    }
    else {
      piStack_1040 = (int *)0x491439;
      FUN_004bb658(iVar4,&local_2024);
      if (local_2024 == 0) {
        piStack_1040 = (int *)0x49145b;
        FUN_004081e8(&local_8,&DAT_00491574);
      }
      else {
        piStack_1040 = (int *)0x49144c;
        FUN_004bb658(iVar4,&local_8);
      }
      piStack_1040 = (int *)0x49146e;
      FUN_004177c8(local_2020,local_8,0x1000);
      iVar4 = local_8;
      if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
        piStack_1040 = (int *)0x49148b;
        iVar4 = FUN_00407488(&local_8,local_8);
      }
      iVar5 = 0;
      if (iVar4 != 0) {
        iVar5 = *(int *)(iVar4 + -4);
      }
      if (0xffd < iVar5) {
        iVar5 = 0xffe;
      }
      auStack_201e[iVar5] = 0;
      piStack_1040 = (int *)local_2020;
      uStack_1044 = 0x4914c9;
      local_10 = FUN_004bcb48(iVar3,0x44d,0);
    }
  }
  piStack_1040 = &local_20;
  uStack_1044 = 0x49152e;
  FUN_00495074(iVar3,local_c,param_4);
  puVar1 = puStack_1034;
  *in_FS_OFFSET = uStack_103c;
  puStack_1034 = &LAB_0049155b;
  puStack_1038 = (undefined1 *)0x49154b;
  thunk_FUN_004072d8(&local_2024,uStack_103c,puVar1);
  puStack_1038 = (undefined1 *)0x491553;
  thunk_FUN_004072d8(&local_8);
  return;
}
