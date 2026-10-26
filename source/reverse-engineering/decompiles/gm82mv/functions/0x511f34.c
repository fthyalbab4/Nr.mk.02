// rea decompile_all
// name: FUN_00511f34
// address: 0x511f34
// body: available
// range: 0x511f34-0x51207c inclusive
// range: 0x51208c-0x512149 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x511f57 (push 0x51214a followed by fs-segment stack chaining); handler 0x51214a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x512013 (push 0x51207d followed by fs-segment stack chaining); handler 0x51207d lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00511f34(int param_1,char param_2)

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
  puStack_24 = &LAB_0051214a;
  local_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_28;
  puVar2 = &stack0xfffffffc;
  if ((((DAT_0068fda8 == '\0') && (puVar2 = &stack0xfffffffc, DAT_006840b8 != 0)) &&
      (puVar2 = &stack0xfffffffc, -1 < param_1)) &&
     ((puVar2 = &stack0xfffffffc, param_1 < DAT_006840b4 &&
      (puVar2 = &stack0xfffffffc, *(char *)(DAT_0068fda0 + param_1 * 0x14) != '\0')))) {
    if (*(int *)(DAT_0068fda0 + 4 + param_1 * 0x14) == 3) {
      iVar1 = *(int *)(DAT_0068fda0 + 0x10 + param_1 * 0x14);
      iVar4 = 0;
      if (iVar1 != 0) {
        iVar4 = *(int *)(iVar1 + -4);
      }
      if (iVar4 < 0x7f) {
        puStack_2c = (undefined1 *)0x511fd8;
        puStack_20 = &stack0xfffffffc;
        cVar3 = FUN_00416b0c(*(undefined4 *)(DAT_0068fda0 + 0x10 + param_1 * 0x14));
        puVar2 = puStack_20;
        if (cVar3 != '\0') {
          puStack_2c = (undefined1 *)0x511fea;
          cVar3 = FUN_00510ce8(DAT_006840b8);
          if (cVar3 == '\x02') {
            puStack_2c = (undefined1 *)0x511ff8;
            FUN_0050fe40(DAT_006840b8);
          }
          puStack_2c = (undefined1 *)0x512008;
          FUN_00510e18(DAT_006840b8,*(undefined4 *)(DAT_0068fda0 + 0x10 + param_1 * 0x14));
          piStack_30 = (int *)&LAB_0051207d;
          uStack_34 = *in_FS_OFFSET;
          *in_FS_OFFSET = &uStack_34;
          puStack_2c = &stack0xfffffffc;
          FUN_0050f904(DAT_006840b8);
          FUN_00510694(DAT_006840b8);
          FUN_0050fc58(DAT_006840b8);
          FUN_00510824(DAT_006840b8,0);
          FUN_004847fc(DAT_006840bc,0);
          uVar5 = FUN_00510c58(DAT_006840b8);
          FUN_0048480c(DAT_006840bc,uVar5);
          FUN_004847fc(DAT_006840bc,param_2);
          *in_FS_OFFSET = uStack_34;
          puVar2 = puStack_20;
        }
      }
      else {
        puStack_2c = (undefined1 *)0x511fc8;
        puStack_20 = &stack0xfffffffc;
        FUN_004a17e4(L"Music file name too long for player.");
        puVar2 = puStack_20;
      }
    }
    else {
      if (param_2 == '\0') {
        puStack_2c = (undefined1 *)0x0;
        piStack_30 = *(int **)(DAT_0068fda0 + 8 + param_1 * 0x14);
        uStack_34 = 0x5120b6;
        (**(code **)(*piStack_30 + 0x18))();
      }
      else {
        puStack_2c = (undefined1 *)0xffffffff;
        piStack_30 = *(int **)(DAT_0068fda0 + 8 + param_1 * 0x14);
        uStack_34 = 0x5120a3;
        puStack_20 = &stack0xfffffffc;
        (**(code **)(*piStack_30 + 0x18))();
      }
      uStack_34 = 0x5120be;
      FUN_0040b268(&local_8);
      if (*(int *)(DAT_0068fda0 + 4 + param_1 * 0x14) == 1) {
        uStack_34 = *(undefined4 *)(DAT_0068fda0 + 0xc + param_1 * 0x14);
        FUN_0040b268(&local_8);
        (**(code **)(*DAT_006840ac + 0xb4))();
        puVar2 = puStack_20;
      }
      else {
        uStack_34 = *(undefined4 *)(DAT_0068fda0 + 0xc + param_1 * 0x14);
        FUN_0040b268(&local_8);
        (**(code **)(*DAT_006840ac + 0xb4))();
        puVar2 = puStack_20;
      }
    }
  }
  puStack_20 = puVar2;
  puVar2 = puStack_20;
  *in_FS_OFFSET = local_28;
  puStack_20 = &LAB_00512151;
  puStack_24 = (undefined1 *)0x512149;
  FUN_0040b268(&local_8,local_28,puVar2);
  return;
}
