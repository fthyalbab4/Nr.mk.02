// rea decompile_all
// name: FUN_0074fd78
// address: 0x74fd78
// body: available
// range: 0x74fd78-0x74fe5e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0074fd78(int param_1,undefined4 *param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  byte bVar5;
  undefined4 uStack_18;
  undefined1 uStack_14;

  bVar5 = 0;
  *(undefined4 **)(param_1 + 0x10) = param_2;
  cVar1 = FUN_0074fae0(param_2);
  if (cVar1 == '\x01') {
    iVar3 = FUN_0074fa04(param_2);
    if (iVar3 == 0) {
      FUN_0041bfec(&PTR_LAB_00744298,1,PTR_PTR_00782110);
      iVar3 = FUN_00406618();
    }
    param_2 = (undefined4 *)FUN_0074fb30(iVar3,param_3);
  }
  else if (cVar1 == '\x02') {
    iVar3 = FUN_0074fa48(param_2);
    if (iVar3 == 0) {
      FUN_0041bfec(&PTR_LAB_00744298,1,PTR_PTR_00782110);
      iVar3 = FUN_00406618();
    }
    param_2 = (undefined4 *)FUN_0074fbf4(iVar3,param_3);
  }
  else {
    FUN_0041bfec(&PTR_LAB_00744298,1,PTR_PTR_007818d8);
    FUN_00406618();
  }
  if (param_2 == (undefined4 *)0x0) {
    uStack_14 = 0x11;
    uStack_18 = param_3;
    FUN_0041c0bc(&PTR_LAB_00744298,1,PTR_PTR_007821b4,0,&uStack_18);
    FUN_00406618();
  }
  uVar2 = FUN_0073404c(param_2[4],param_2[2]);
  FUN_0043fdf4(param_1,*(int *)(param_1 + 0x10) + param_2[3],uVar2);
  puVar4 = (undefined4 *)(param_1 + 0x14);
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *param_2;
    param_2 = param_2 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  return;
}
