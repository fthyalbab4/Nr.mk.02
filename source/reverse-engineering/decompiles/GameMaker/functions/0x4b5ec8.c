// rea decompile_all
// name: FUN_004b5ec8
// address: 0x4b5ec8
// body: available
// range: 0x4b5ec8-0x4b5feb inclusive
// range: 0x4b600e-0x4b605e inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4b5f0e (push 0x4b605f followed by fs-segment stack chaining); handler 0x4b605f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4b5fd2 (push 0x4b5fec followed by fs-segment stack chaining); handler 0x4b5fec lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b5ec8(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar4;
  undefined4 uStack_4c;
  undefined1 *puStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  undefined1 local_18 [4];
  undefined4 local_14;
  undefined4 *local_10 [2];
  undefined4 local_8;

  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_8 = 0;
  puStack_3c = (undefined1 *)0x4b5ef5;
  local_20 = param_3;
  local_1c = param_1;
  FUN_00408d1c(local_10,&DAT_0049c6fc);
  puStack_3c = (undefined1 *)0x4b5f03;
  FUN_00408d1c(local_18,&DAT_0049c6fc);
  puStack_40 = &LAB_004b605f;
  puStack_44 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_44;
  puStack_48 = (undefined1 *)0x4b5f1b;
  puStack_3c = &stack0xfffffffc;
  FUN_004173d8(param_2,&local_2c);
  puStack_48 = (undefined1 *)0x4b5f26;
  FUN_00408144(&local_28,local_2c);
  puStack_44 = (undefined1 *)0x4b5f31;
  FUN_00415d28(local_28,&local_24);
  puStack_44 = (undefined1 *)0x4b5f3c;
  FUN_00408130(&local_8,local_24);
  puStack_44 = (undefined1 *)0x4b5f4e;
  FUN_00408778(&local_8,1,1);
  puStack_44 = (undefined1 *)0x4b5f61;
  FUN_00409084(local_10,&PTR_PTR_007783e0,&DAT_0049c6fc);
  iVar2 = *(int *)(DAT_00788194 + 8);
  if (-1 < iVar2 + -1) {
    iVar3 = 0;
    uVar4 = true;
    do {
      puStack_44 = (undefined1 *)0x4b5f7d;
      uVar1 = FUN_0043b048(DAT_00788194,iVar3);
      puStack_44 = (undefined1 *)0x4b5f8d;
      FUN_00409084(local_18,uVar1,&DAT_0049c6fc);
      puStack_44 = (undefined1 *)0x4b5f98;
      FUN_00408640(local_14,local_8);
      if ((bool)uVar4) {
        puStack_44 = (undefined1 *)0x4b5fab;
        FUN_00409084(local_10,local_18,&DAT_0049c6fc);
        break;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
      uVar4 = iVar2 == 0;
    } while (!(bool)uVar4);
  }
  if (*(int *)(local_1c + 0x24) == 0) {
    puStack_44 = (undefined1 *)0x4b5fc1;
    uVar1 = (*(code *)*local_10[0])(local_10[0],1);
    *(undefined4 *)(local_1c + 0x24) = uVar1;
  }
  puStack_48 = &LAB_004b5fec;
  uStack_4c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_4c;
  puStack_44 = &stack0xfffffffc;
  FUN_0043df14(local_1c,param_2,local_20);
  *in_FS_OFFSET = uStack_4c;
  puStack_44 = (undefined1 *)0x4b6021;
  (**(code **)(**(int **)(local_1c + 0x1c) + 0xec))(*(int **)(local_1c + 0x1c),0x7ffffff0);
  *in_FS_OFFSET = puStack_40;
  puStack_3c = (undefined1 *)0x4b6036;
  thunk_FUN_00406e5c(&local_2c,puStack_40,unaff_EDI);
  puStack_3c = (undefined1 *)0x4b6043;
  FUN_00407a90(&local_28,2);
  puStack_3c = (undefined1 *)0x4b6056;
  FUN_00408e44(local_18,&DAT_0049c6fc,2);
  puStack_3c = (undefined1 *)0x4b605e;
  thunk_FUN_00406e5c(&local_8);
  return;
}
