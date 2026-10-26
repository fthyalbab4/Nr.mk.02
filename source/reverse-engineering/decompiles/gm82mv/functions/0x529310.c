// rea decompile_all
// name: FUN_00529310
// address: 0x529310
// body: available
// range: 0x529310-0x529463 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x52932c (push 0x529464 followed by fs-segment stack chaining); handler 0x529464 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00529310(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint nNumber;
  undefined4 *in_FS_OFFSET;
  undefined1 *puVar7;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_1c;
  undefined1 local_18 [16];
  int local_8;

  puStack_2c = &stack0xfffffffc;
  local_1c = 0;
  puStack_30 = &LAB_00529464;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  local_8 = param_1;
  cVar1 = FUN_004631a4(*(undefined4 *)(*(int *)(param_4 + -4) + 8));
  if (cVar1 == '\0') {
    FUN_00463124(*(undefined4 *)(*(int *)(param_4 + -4) + 8));
    uVar3 = FUN_0045d4ec();
    FUN_00524630(*(undefined4 *)(*(int *)(param_4 + -4) + 0x20),uVar3);
  }
  else {
    uVar3 = (**(code **)(**(int **)(*(int *)(param_4 + -4) + 8) + 0x28))();
    FUN_005244d8(*(undefined4 *)(*(int *)(param_4 + -4) + 0x20),uVar3);
  }
  uVar4 = FUN_005281b8(*(undefined4 *)(param_4 + -4),4);
  uVar4 = uVar4 & 0xffff;
  if (-1 < (int)(uVar4 - 1)) {
    nNumber = 0;
    do {
      if ((nNumber & 0x1f) == 0) {
        uVar5 = FUN_005281b8(*(undefined4 *)(param_4 + -4),4);
        iVar6 = MulDiv(nNumber,100,uVar5 & 0xffff);
        uVar3 = 0;
        FUN_00436ad0(0,0,0,local_18,0);
        puVar7 = local_18;
        FUN_0040b9d0(&LAB_0051ec14,&local_1c);
        FUN_00406268(*(undefined4 *)(*(int *)(param_4 + -4) + 4),*(undefined4 *)(param_4 + -4),1,
                     local_1c,puVar7,uVar3,iVar6);
      }
      uVar3 = (**(code **)**(undefined4 **)(param_4 + -8))(*(undefined4 **)(param_4 + -8),nNumber);
      uVar2 = FUN_005281b8(*(undefined4 *)(param_4 + -4),3);
      FUN_00404514(uVar3,local_8,uVar2);
      uVar5 = FUN_005281b8(*(undefined4 *)(param_4 + -4),3);
      local_8 = local_8 + (uVar5 & 0xffff);
      nNumber = nNumber + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  puVar7 = puStack_2c;
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_0052946b;
  puStack_30 = (undefined1 *)0x529463;
  thunk_FUN_004072d8(&local_1c,uStack_34,puVar7);
  return;
}
