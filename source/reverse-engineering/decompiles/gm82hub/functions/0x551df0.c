// rea decompile_all
// name: FUN_00551df0
// address: 0x551df0
// body: available
// range: 0x551df0-0x551eef inclusive
// range: 0x551ef7-0x551f19 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x551e12 (push 0x551f1a followed by fs-segment stack chaining); handler 0x551f1a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x551e48 (push 0x551ef0 followed by fs-segment stack chaining); handler 0x551ef0 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00551df0(int param_1,int *param_2,undefined4 param_3,char param_4)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined *puVar6;
  undefined4 uVar7;
  undefined4 uStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int *local_14;
  int iStack_10;
  int *local_c;
  undefined4 local_8;

  puStack_30 = &stack0xfffffffc;
  local_8 = 0;
  local_14 = (int *)0x0;
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  puStack_34 = &LAB_00551f1a;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  iStack_10 = (uint)*(byte *)(param_1 + 0x71) << 0x18;
  local_c = param_2;
  if (*(byte *)(param_1 + 0x71) != 0) {
    uStack_3c = 0;
    puStack_40 = (undefined1 *)0x551e32;
    local_14 = (int *)FUN_0054c63c(*(undefined4 *)(param_1 + 0x14),1);
    puStack_40 = (undefined1 *)0x551e3d;
    FUN_0043aa0c(local_c);
    puStack_44 = &LAB_00551ef0;
    uStack_48 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_48;
    puStack_40 = &stack0xfffffffc;
    iVar3 = (**(code **)(*local_14 + 0x14))();
    if (-1 < iVar3 + -1) {
      iVar5 = 0;
      do {
        (**(code **)(*local_14 + 0xc))(local_14,iVar5,&local_8);
        FUN_0041733c(local_8,&local_18);
        cVar2 = FUN_00542f40(local_18,L".bpl",0);
        if (cVar2 != '\0') {
          if (param_4 == '\0') {
            (**(code **)(*local_c + 0x38))(local_c,local_8);
          }
          else {
            puVar6 = &DAT_00551f54;
            uVar7 = local_8;
            uVar4 = FUN_00408220(local_8);
            FUN_0041ea80(uVar4,&local_20);
            uVar4 = local_20;
            FUN_0040875c(&local_1c,3);
            (**(code **)(*local_c + 0x38))(local_c,local_1c,*local_c,uVar4,puVar6,uVar7);
          }
        }
        iVar5 = iVar5 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    puVar1 = puStack_40;
    *in_FS_OFFSET = uStack_48;
    puStack_40 = (undefined1 *)0x551ef7;
    puStack_44 = (undefined1 *)0x551ee7;
    FUN_00405fdc(local_14,uStack_48,puVar1);
    puStack_44 = (undefined1 *)0x551eef;
    FUN_0043aad4(local_c);
    return;
  }
  *in_FS_OFFSET = uStack_38;
  puStack_30 = &LAB_00551f21;
  puStack_34 = (undefined1 *)0x551f11;
  thunk_FUN_004072fc(&local_20,3,&stack0xfffffffc);
  puStack_34 = (undefined1 *)0x551f19;
  thunk_FUN_004072d8(&local_8);
  return;
}
