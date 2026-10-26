// rea decompile_all
// name: FUN_005c8c80
// address: 0x5c8c80
// body: available
// range: 0x5c8c80-0x5c8d57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5c8c9a (push 0x5c8d58 followed by fs-segment stack chaining); handler 0x5c8d58 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c8c80(int param_1,int *param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined2 extraout_var;
  int iVar4;
  int *in_FS_OFFSET;
  bool bVar5;
  undefined4 uVar6;
  int *piStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_14;
  undefined4 uStack_10;
  int local_c;
  undefined4 local_8;

  puStack_20 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_14 = 0;
  puStack_24 = &LAB_005c8d58;
  piStack_28 = (int *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&piStack_28;
  uStack_10 = 0;
  cVar2 = FUN_0041f04c(param_2,param_1 + 0x50);
  cVar2 = cVar2 == '\0';
  if (!(bool)cVar2) {
    (**(code **)(*param_2 + 0x34))(param_2,&local_14);
    FUN_005c0500(local_14,&local_8);
    FUN_00408640(local_8,*(undefined4 *)(param_1 + 100));
    uStack_10 = CONCAT13(cVar2,(undefined3)uStack_10);
    if (cVar2 == '\0') {
      uVar6 = 0x5c8ce6;
      iVar3 = FUN_00408a68(&DAT_005c8d78,*(undefined4 *)(param_1 + 100));
      if (0 < iVar3) {
        piStack_28 = &local_c;
        FUN_005c4cf4(*(undefined4 *)(param_1 + 100),CONCAT22(extraout_var,0x3b),2,uVar6);
        iVar3 = FUN_00409a20(local_c);
        if (-1 < iVar3) {
          iVar3 = iVar3 + 1;
          iVar4 = 0;
          bVar5 = true;
          do {
            FUN_00408640(local_8,*(undefined4 *)(local_c + iVar4 * 4));
            if (bVar5) {
              uStack_10 = CONCAT13(1,(undefined3)uStack_10);
              break;
            }
            iVar4 = iVar4 + 1;
            iVar3 = iVar3 + -1;
            bVar5 = iVar3 == 0;
          } while (!bVar5);
        }
      }
    }
  }
  puVar1 = puStack_20;
  *in_FS_OFFSET = (int)piStack_28;
  puStack_20 = &LAB_005c8d5f;
  puStack_24 = (undefined1 *)0x5c8d41;
  thunk_FUN_00406e5c(&local_14,piStack_28,puVar1);
  puStack_24 = (undefined1 *)0x5c8d4f;
  FUN_00409ce0(&local_c,&DAT_005c4cc0);
  puStack_24 = (undefined1 *)0x5c8d57;
  thunk_FUN_00406e5c(&local_8);
  return;
}
