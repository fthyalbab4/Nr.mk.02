// rea decompile_all
// name: FUN_00664de4
// address: 0x664de4
// body: available
// range: 0x664de4-0x664fe6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x664e03 (push 0x664fe7 followed by fs-segment stack chaining); handler 0x664fe7 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00664de4(int *param_1)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  int *local_8;

  puStack_24 = &stack0xfffffffc;
  local_14 = 0;
  local_10 = 0;
  puStack_28 = &LAB_00664fe7;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puVar1 = &stack0xfffffffc;
  local_8 = param_1;
  if (((*(byte *)(param_1[200] + 0x1c) & 8) == 0) &&
     (puVar1 = &stack0xfffffffc, *(char *)(param_1[200] + 0x29e) == '\x02')) {
    cVar2 = (**(code **)(*param_1 + 0x120))();
    puVar1 = puStack_24;
    if ((cVar2 == '\0') && (local_8[0xed] != 0)) {
      FUN_00664a74(local_8);
      if (local_8[0xe6] == 0) {
        iVar3 = FUN_0050a648(&PTR_FUN_00509520,1,local_8);
        local_8[0xe6] = iVar3;
        FUN_0067236c(local_8[0xed]);
        iVar3 = FUN_00672bf8();
        local_8[0xec] = iVar3;
        FUN_00674454(iVar3,&DAT_00665004);
      }
      iVar3 = local_8[200];
      iVar4 = FUN_00517050(iVar3);
      if (iVar4 == 0) {
        iVar4 = local_8[0xec];
        local_8[0xec] = 0;
        FUN_00405a7c(iVar4);
      }
      iVar4 = FUN_00517050(iVar3);
      puVar1 = puStack_24;
      if (-1 < iVar4 + -1) {
        iVar6 = 0;
        local_c = iVar4;
        do {
          FUN_0051709c(iVar3,iVar6);
          iVar4 = FUN_00664d70();
          if (iVar4 == 0) {
            iVar4 = FUN_004d5394(&LAB_00660300,1,local_8[0xe6]);
            *(undefined1 *)(iVar4 + 0xb0) = 0;
            FUN_0050a4e0(iVar4,local_8[0xe6]);
            FUN_0050af6c(iVar4,iVar3);
            uVar5 = FUN_0051709c(iVar3,iVar6);
            FUN_004d5378(iVar4,uVar5);
            uVar5 = FUN_0051709c(iVar3,iVar6);
            FUN_004ee6a0(uVar5,&local_14);
            FUN_0050ad88(iVar4,local_14);
            FUN_0067236c(local_8[0xed]);
            uVar5 = FUN_00672bf8();
            *(undefined4 *)(iVar4 + 0xa8) = uVar5;
            *(int **)(iVar4 + 0xac) = local_8;
            FUN_00674340(*(undefined4 *)(iVar4 + 0xa8),iVar4);
            FUN_006747d4(*(undefined4 *)(iVar4 + 0xa8),0xffffffff);
          }
          else {
            uVar5 = FUN_0051709c(iVar3,iVar6,&stack0xfffffffc);
            FUN_004ee6a0(uVar5,&local_10);
            FUN_0050ad88(iVar4,local_10);
          }
          if (iVar6 == 0) {
            FUN_0050ade8(iVar4,1);
          }
          iVar6 = iVar6 + 1;
          local_c = local_c + -1;
          puVar1 = puStack_24;
        } while (local_c != 0);
      }
    }
  }
  puStack_24 = puVar1;
  puVar1 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_00664fee;
  puStack_28 = (undefined1 *)0x664fe6;
  thunk_FUN_00406e80(&local_14,2,puVar1);
  return;
}
