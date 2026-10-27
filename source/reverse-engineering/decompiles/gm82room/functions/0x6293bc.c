// rea decompile_all
// name: FUN_006293bc
// address: 0x6293bc
// body: available
// range: 0x6293bc-0x629499 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x62940d (push 0x62949a followed by fs-segment stack chaining); handler 0x62949a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006293bc(undefined4 param_1,undefined4 param_2,undefined4 *param_3,char param_4)

{
  undefined1 *puVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *in_FS_OFFSET;
  undefined1 local_8121 [28613];
  undefined4 uStack_115c;
  int *piStack_1158;
  undefined4 uStack_1154;
  undefined4 uStack_1150;
  undefined4 uStack_114c;
  undefined1 *puStack_1148;
  undefined4 uStack_1144;
  undefined4 uStack_1140;
  undefined4 uStack_113c;
  undefined1 *puStack_1138;
  undefined1 *puStack_1134;
  undefined4 local_38;
  undefined4 local_34 [11];
  int *local_8;

  piVar2 = (int *)0x8;
  do {
    piVar3 = piVar2;
    piVar2 = (int *)((int)piVar3 + -1);
  } while ((int *)((int)piVar3 + -1) != (int *)0x0);
  puVar5 = local_34;
  for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *param_3;
    param_3 = param_3 + 1;
    puVar5 = puVar5 + 1;
  }
  puStack_1134 = (undefined1 *)0x6293f4;
  local_8 = piVar3;
  FUN_0040b2dc(piVar3);
  puStack_1134 = (undefined1 *)0x629402;
  FUN_0040923c(local_34,&DAT_00628dc0);
  puStack_1138 = &LAB_0062949a;
  uStack_113c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_113c;
  puStack_1134 = &stack0xfffffffc;
  if (local_8 != (int *)0x0) {
    uStack_1140 = 33000;
    uStack_1144 = 0x62942e;
    puStack_1134 = &stack0xfffffffc;
    FUN_006290b0(local_34,&local_38,local_8121);
    uStack_1154 = param_2;
    if (param_4 == '\0') {
      uStack_1144 = local_38;
      puStack_1148 = local_8121;
      uStack_114c = 0;
      uStack_1150 = local_34[0];
      piStack_1158 = local_8;
      uStack_115c = 0x629471;
      (**(code **)(*local_8 + 0x68))();
    }
    else {
      uStack_1144 = local_38;
      puStack_1148 = local_8121;
      uStack_114c = 1;
      uStack_1150 = local_34[0];
      piStack_1158 = local_8;
      uStack_115c = 0x62944f;
      (**(code **)(*local_8 + 0x68))();
    }
  }
  puVar1 = puStack_1134;
  *in_FS_OFFSET = uStack_113c;
  puStack_1134 = &LAB_006294a1;
  puStack_1138 = (undefined1 *)0x629491;
  FUN_004090d0(local_34,&DAT_00628dc0,puVar1);
  puStack_1138 = (undefined1 *)0x629499;
  FUN_0040b268(&local_8);
  return;
}
