// rea decompile_all
// name: FUN_006d1ff8
// address: 0x6d1ff8
// body: available
// range: 0x6d1ff8-0x6d22e8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6d2018 (push 0x6d22e9 followed by fs-segment stack chaining); handler 0x6d22e9 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006d1ff8(undefined4 param_1)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 unaff_EBX;
  int iVar4;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined *local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;

  local_20 = &stack0xfffffffc;
  local_10 = 4;
  do {
    local_8 = 0;
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  local_24 = &LAB_006d22e9;
  local_28 = (undefined *)*in_FS_OFFSET;
  *in_FS_OFFSET = &local_28;
  iVar3 = FUN_006f58f8();
  if (-1 < iVar3 + -1) {
    iVar4 = 0;
    do {
      cVar2 = FUN_006f5900(iVar4);
      if (cVar2 != '\0') {
        local_28 = &DAT_00800080;
        FUN_006f5920(iVar4,&local_8);
        FUN_004082dc(&local_8,L": sprite");
        FUN_006d1af4(param_1,local_8,1);
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar3 = FUN_00652298();
  if (-1 < iVar3 + -1) {
    iVar4 = 0;
    do {
      cVar2 = FUN_006522a0(iVar4);
      if (cVar2 != '\0') {
        local_28 = &DAT_00800080;
        FUN_006522c0(iVar4,&local_c);
        FUN_004082dc(&local_c,L": sound");
        FUN_006d1af4(param_1,local_c,2);
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar3 = FUN_0064de10();
  if (-1 < iVar3 + -1) {
    iVar4 = 0;
    do {
      cVar2 = FUN_0064de18(iVar4);
      if (cVar2 != '\0') {
        local_28 = &DAT_00800080;
        FUN_0064de38(iVar4,&local_10);
        FUN_004082dc(&local_10,L": background");
        FUN_006d1af4(param_1,local_10,3);
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar3 = FUN_00722818();
  if (-1 < iVar3 + -1) {
    iVar4 = 0;
    do {
      cVar2 = FUN_00722820(iVar4);
      if (cVar2 != '\0') {
        local_28 = &DAT_00800080;
        FUN_00722840(iVar4,&stack0xffffffec);
        FUN_004082dc(&stack0xffffffec,L": path");
        FUN_006d1af4(param_1,unaff_EBX,4);
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar3 = FUN_00655b18();
  if (-1 < iVar3 + -1) {
    iVar4 = 0;
    do {
      cVar2 = FUN_00655b20(iVar4);
      if (cVar2 != '\0') {
        local_28 = &DAT_00800080;
        FUN_00655b40(iVar4,&stack0xffffffe8);
        FUN_004082dc(&stack0xffffffe8,L": script");
        FUN_006d1af4(param_1,unaff_ESI,5);
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar3 = FUN_006fcc30();
  if (-1 < iVar3 + -1) {
    iVar4 = 0;
    do {
      cVar2 = FUN_006fcc38(iVar4);
      if (cVar2 != '\0') {
        local_28 = &DAT_00800080;
        FUN_006fcc58(iVar4,&stack0xffffffe4);
        FUN_004082dc(&stack0xffffffe4,L": font");
        FUN_006d1af4(param_1,unaff_EDI,6);
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar3 = FUN_006fa5e0();
  if (-1 < iVar3 + -1) {
    iVar4 = 0;
    do {
      cVar2 = FUN_006fa5e8(iVar4);
      if (cVar2 != '\0') {
        local_28 = &DAT_00800080;
        FUN_006fa608(iVar4,&local_20);
        FUN_004082dc(&local_20,L": time line");
        FUN_006d1af4(param_1,local_20,7);
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar3 = FUN_0062ca94();
  if (-1 < iVar3 + -1) {
    iVar4 = 0;
    do {
      cVar2 = FUN_0062ca9c(iVar4);
      if (cVar2 != '\0') {
        local_28 = &DAT_00800080;
        FUN_0062cabc(iVar4,&local_24);
        FUN_004082dc(&local_24,L": object");
        FUN_006d1af4(param_1,local_24,8);
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar3 = FUN_00692efc();
  if (-1 < iVar3 + -1) {
    iVar4 = 0;
    do {
      cVar2 = FUN_00692f04(iVar4);
      if (cVar2 != '\0') {
        local_28 = &DAT_00800080;
        FUN_00692f24(iVar4,&local_28);
        FUN_004082dc(&local_28,L": room");
        FUN_006d1af4(param_1,local_28,9);
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_006d194c(param_1);
  puVar1 = local_20;
  *in_FS_OFFSET = local_28;
  local_20 = &LAB_006d22f0;
  local_24 = (undefined1 *)0x6d22e8;
  thunk_FUN_00406e80(&local_28,9,puVar1);
  return;
}
