// rea decompile_all
// name: FUN_0064eebc
// address: 0x64eebc
// body: available
// range: 0x64eebc-0x64efea inclusive
// range: 0x64effa-0x64f0b7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x64eedf (push 0x64f0b8 followed by fs-segment stack chaining); handler 0x64f0b8 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x64ef81 (push 0x64efeb followed by fs-segment stack chaining); handler 0x64efeb lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0064eebc(int param_1,char param_2)

{
  int iVar1;
  undefined1 *puVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  int *piStack_30;
  undefined1 *puStack_2c;
  undefined4 local_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_8;

  puStack_20 = &stack0xfffffffc;
  local_8 = 0;
  puStack_24 = &LAB_0064f0b8;
  local_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_28;
  puVar2 = &stack0xfffffffc;
  if (((-1 < param_1) && (puVar2 = &stack0xfffffffc, param_1 < DAT_0077f2ac)) &&
     (puVar2 = &stack0xfffffffc, *(char *)(DAT_0078a1ac + param_1 * 0x14) != '\0')) {
    if (*(int *)(DAT_0078a1ac + 4 + param_1 * 0x14) == 3) {
      iVar1 = *(int *)(DAT_0078a1ac + 0x10 + param_1 * 0x14);
      iVar4 = 0;
      if (iVar1 != 0) {
        iVar4 = *(int *)(iVar1 + -4);
      }
      if (iVar4 < 0x7f) {
        puStack_2c = (undefined1 *)0x64ef46;
        puStack_20 = &stack0xfffffffc;
        cVar3 = FUN_00416e40(*(undefined4 *)(DAT_0078a1ac + 0x10 + param_1 * 0x14));
        puVar2 = puStack_20;
        if (cVar3 != '\0') {
          puStack_2c = (undefined1 *)0x64ef58;
          cVar3 = FUN_005ad734(DAT_0077f2b0);
          if (cVar3 == '\x02') {
            puStack_2c = (undefined1 *)0x64ef66;
            FUN_005ac88c(DAT_0077f2b0);
          }
          puStack_2c = (undefined1 *)0x64ef76;
          FUN_005ad864(DAT_0077f2b0,*(undefined4 *)(DAT_0078a1ac + 0x10 + param_1 * 0x14));
          piStack_30 = (int *)&LAB_0064efeb;
          uStack_34 = *in_FS_OFFSET;
          *in_FS_OFFSET = &uStack_34;
          puStack_2c = &stack0xfffffffc;
          FUN_005ac350(DAT_0077f2b0);
          FUN_005ad0e0(DAT_0077f2b0);
          FUN_005ac6a4(DAT_0077f2b0);
          FUN_005ad270(DAT_0077f2b0,0);
          FUN_0048e1e4(DAT_0077f2b4,0);
          uVar5 = FUN_005ad6a4(DAT_0077f2b0);
          FUN_0048e1f4(DAT_0077f2b4,uVar5);
          FUN_0048e1e4(DAT_0077f2b4,param_2);
          *in_FS_OFFSET = uStack_34;
          puVar2 = puStack_20;
        }
      }
      else {
        puStack_2c = (undefined1 *)0x64ef36;
        puStack_20 = &stack0xfffffffc;
        FUN_004d43f8(L"Music file name too long for player.");
        puVar2 = puStack_20;
      }
    }
    else {
      if (param_2 == '\0') {
        puStack_2c = (undefined1 *)0x0;
        piStack_30 = *(int **)(DAT_0078a1ac + 8 + param_1 * 0x14);
        uStack_34 = 0x64f024;
        (**(code **)(*piStack_30 + 0x18))();
      }
      else {
        puStack_2c = (undefined1 *)0xffffffff;
        piStack_30 = *(int **)(DAT_0078a1ac + 8 + param_1 * 0x14);
        uStack_34 = 0x64f011;
        puStack_20 = &stack0xfffffffc;
        (**(code **)(*piStack_30 + 0x18))();
      }
      uStack_34 = 0x64f02c;
      FUN_0040b140(&local_8);
      if (*(int *)(DAT_0078a1ac + 4 + param_1 * 0x14) == 1) {
        uStack_34 = *(undefined4 *)(DAT_0078a1ac + 0xc + param_1 * 0x14);
        FUN_0040b140(&local_8);
        (**(code **)(*DAT_0077f2a4 + 0xb4))();
        puVar2 = puStack_20;
      }
      else {
        uStack_34 = *(undefined4 *)(DAT_0078a1ac + 0xc + param_1 * 0x14);
        FUN_0040b140(&local_8);
        (**(code **)(*DAT_0077f2a4 + 0xb4))();
        puVar2 = puStack_20;
      }
    }
  }
  puStack_20 = puVar2;
  puVar2 = puStack_20;
  *in_FS_OFFSET = local_28;
  puStack_20 = &LAB_0064f0bf;
  puStack_24 = (undefined1 *)0x64f0b7;
  FUN_0040b140(&local_8,local_28,puVar2);
  return;
}
