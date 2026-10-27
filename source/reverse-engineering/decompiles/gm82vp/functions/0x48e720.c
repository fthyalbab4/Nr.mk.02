// rea decompile_all
// name: FUN_0048e720
// address: 0x48e720
// body: available
// range: 0x48e720-0x48e843 inclusive
// range: 0x48e866-0x48e8b6 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x48e766 (push 0x48e8b7 followed by fs-segment stack chaining); handler 0x48e8b7 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x48e82a (push 0x48e844 followed by fs-segment stack chaining); handler 0x48e844 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048e720(int param_1,undefined4 param_2,undefined4 param_3)

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
  puStack_3c = (undefined1 *)0x48e74d;
  local_20 = param_3;
  local_1c = param_1;
  FUN_00408ff8(local_10,&DAT_004873c0);
  puStack_3c = (undefined1 *)0x48e75b;
  FUN_00408ff8(local_18,&DAT_004873c0);
  puStack_40 = &LAB_0048e8b7;
  puStack_44 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_44;
  puStack_48 = (undefined1 *)0x48e773;
  puStack_3c = &stack0xfffffffc;
  FUN_0041733c(param_2,&local_2c);
  puStack_48 = (undefined1 *)0x48e77e;
  FUN_00408420(&local_28,local_2c);
  puStack_44 = (undefined1 *)0x48e789;
  FUN_00415b5c(local_28,&local_24);
  puStack_44 = (undefined1 *)0x48e794;
  FUN_0040840c(&local_8,local_24);
  puStack_44 = (undefined1 *)0x48e7a6;
  FUN_00408a54(&local_8,1,1);
  puStack_44 = (undefined1 *)0x48e7b9;
  FUN_00409360(local_10,&PTR_PTR_006813a4,&DAT_004873c0);
  iVar2 = *(int *)(DAT_0068f194 + 8);
  if (-1 < iVar2 + -1) {
    iVar3 = 0;
    uVar4 = true;
    do {
      puStack_44 = (undefined1 *)0x48e7d5;
      uVar1 = FUN_00438ec4(DAT_0068f194,iVar3);
      puStack_44 = (undefined1 *)0x48e7e5;
      FUN_00409360(local_18,uVar1,&DAT_004873c0);
      puStack_44 = (undefined1 *)0x48e7f0;
      FUN_0040891c(local_14,local_8);
      if ((bool)uVar4) {
        puStack_44 = (undefined1 *)0x48e803;
        FUN_00409360(local_10,local_18,&DAT_004873c0);
        break;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
      uVar4 = iVar2 == 0;
    } while (!(bool)uVar4);
  }
  if (*(int *)(local_1c + 0x24) == 0) {
    puStack_44 = (undefined1 *)0x48e819;
    uVar1 = (*(code *)*local_10[0])(local_10[0],1);
    *(undefined4 *)(local_1c + 0x24) = uVar1;
  }
  puStack_48 = &LAB_0048e844;
  uStack_4c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_4c;
  puStack_44 = &stack0xfffffffc;
  FUN_0043b5cc(local_1c,param_2,local_20);
  *in_FS_OFFSET = uStack_4c;
  puStack_44 = (undefined1 *)0x48e879;
  (**(code **)(**(int **)(local_1c + 0x1c) + 0xec))(*(int **)(local_1c + 0x1c),0x7ffffff0);
  *in_FS_OFFSET = puStack_40;
  puStack_3c = (undefined1 *)0x48e88e;
  thunk_FUN_004072d8(&local_2c,puStack_40,unaff_EDI);
  puStack_3c = (undefined1 *)0x48e89b;
  FUN_00407de8(&local_28,2);
  puStack_3c = (undefined1 *)0x48e8ae;
  FUN_00409120(local_18,&DAT_004873c0,2);
  puStack_3c = (undefined1 *)0x48e8b6;
  thunk_FUN_004072d8(&local_8);
  return;
}
