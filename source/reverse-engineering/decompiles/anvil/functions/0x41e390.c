// rea decompile_all
// name: FUN_0041e390
// address: 0x41e390
// body: available
// range: 0x41e390-0x41e534 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x41e3c2 (push 0x41e535 followed by fs-segment stack chaining); handler 0x41e535 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041e390(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4,byte param_5
                 )

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int *in_FS_OFFSET;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  int local_8;

  local_24 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  puStack_34 = (undefined1 *)0x41e3b7;
  local_18 = param_3;
  local_8 = param_2;
  thunk_FUN_00407ad0(param_2);
  puStack_38 = &LAB_0041e535;
  piStack_3c = (int *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&piStack_3c;
  if ((param_5 & 2) == 0) {
    puStack_34 = &stack0xfffffffc;
    FUN_004081e8(&local_c,param_1);
    FUN_004081e8(&local_10,local_8);
  }
  else {
    puStack_34 = &stack0xfffffffc;
    FUN_004158a4(param_1,&local_c);
    FUN_004158a4(local_8,&local_10);
  }
  FUN_004081e8(&local_14,param_1);
  FUN_00408194(param_4,0);
  do {
    if (local_c == 0) {
LAB_0041e512:
      puVar1 = puStack_34;
      *in_FS_OFFSET = (int)piStack_3c;
      puStack_34 = &LAB_0041e53c;
      puStack_38 = (undefined1 *)0x41e527;
      thunk_FUN_004072d8(&local_24,piStack_3c,puVar1);
      puStack_38 = (undefined1 *)0x41e534;
      thunk_FUN_004072fc(&local_14,4);
      return;
    }
    iVar2 = FUN_0041d99c(local_10,local_c);
    if (iVar2 == 0) {
      FUN_004085b8(param_4,local_14);
      goto LAB_0041e512;
    }
    FUN_00408984(local_14,1,iVar2 + -1,&local_24,*param_4);
    uVar5 = local_18;
    uVar6 = local_24;
    FUN_0040875c(param_4,3);
    iVar3 = local_8;
    if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
      iVar3 = FUN_00407488(&local_8,local_8);
    }
    local_1c = iVar3;
    if (iVar3 != 0) {
      local_1c = *(int *)(iVar3 + -4);
    }
    uVar4 = 0x41e4a9;
    FUN_00408984(local_14,local_1c + iVar2,0x7fffffff,&local_14,uVar5,uVar6);
    if ((param_5 & 1) == 0) {
      FUN_004085b8(param_4,local_14);
      goto LAB_0041e512;
    }
    iVar3 = local_10;
    if ((local_10 != 0) && (*(short *)(local_10 + -10) != 2)) {
      uVar4 = 0x41e4dc;
      iVar3 = FUN_00407488(&local_10,local_10);
    }
    local_20 = iVar3;
    if (iVar3 != 0) {
      local_20 = *(int *)(iVar3 + -4);
    }
    piStack_3c = &local_c;
    FUN_00408984(local_c,local_20 + iVar2,0x7fffffff,uVar4);
  } while( true );
}
