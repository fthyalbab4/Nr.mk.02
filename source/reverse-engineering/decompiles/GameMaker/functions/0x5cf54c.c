// rea decompile_all
// name: FUN_005cf54c
// address: 0x5cf54c
// body: available
// range: 0x5cf54c-0x5cf632 inclusive
// range: 0x5cf63a-0x5cf664 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5cf567 (push 0x5cf665 followed by fs-segment stack chaining); handler 0x5cf665 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5cf5cd (push 0x5cf633 followed by fs-segment stack chaining); handler 0x5cf633 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005cf54c(undefined4 param_1)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined2 extraout_var;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar4;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_20;
  undefined4 local_1c;
  int *local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_2c = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  uStack_14 = 0;
  local_18 = (int *)0x0;
  local_1c = 0;
  local_20 = 0;
  puStack_30 = &LAB_005cf665;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  puStack_38 = (undefined1 *)0x5cf576;
  uVar3 = FUN_0043f190(&PTR_FUN_00432364,1);
  puStack_38 = (undefined1 *)0x5cf583;
  FUN_0043e910(uVar3,CONCAT22(extraout_var,0x2c));
  puStack_38 = (undefined1 *)0x5cf592;
  FUN_005d14c0(param_1,"Revoked",&local_20);
  puStack_38 = (undefined1 *)0x5cf59d;
  FUN_004080e4(&local_1c,local_20);
  puStack_38 = (undefined1 *)0x5cf5a7;
  FUN_0043e6d4(uVar3,local_1c);
  puStack_38 = (undefined1 *)0x5cf5b4;
  FUN_005d0e48(L"Pass Phrase",&local_c);
  uStack_14 = CONCAT13(1,(undefined3)uStack_14);
  puStack_38 = (undefined1 *)0x5cf5bf;
  local_18 = (int *)FUN_0043d9e4(uVar3);
  puStack_3c = &LAB_005cf633;
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_40;
  puStack_38 = &stack0xfffffffc;
  do {
    cVar2 = FUN_0043d140(local_18);
    uVar4 = cVar2 == '\0';
    if ((bool)uVar4) {
      *in_FS_OFFSET = uStack_40;
      puStack_38 = (undefined1 *)0x5cf63a;
      if (local_18 != (int *)0x0) {
        puStack_3c = (undefined1 *)0x5cf632;
        (**(code **)(*local_18 + -4))(local_18,1);
      }
      return;
    }
    (**(code **)(*(int *)local_18[2] + 0xc))((int *)local_18[2],local_18[1],&local_10);
    FUN_00407f0c(&local_8,local_10);
    FUN_00408640(local_8,local_c);
  } while (!(bool)uVar4);
  uStack_14 = uStack_14 & 0xffffff;
  FUN_0040670c();
  puVar1 = puStack_2c;
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_005cf66c;
  puStack_30 = (undefined1 *)0x5cf64f;
  FUN_00406e5c(&local_20,uStack_34,puVar1);
  puStack_30 = (undefined1 *)0x5cf657;
  thunk_FUN_00406e5c(&local_1c);
  puStack_30 = (undefined1 *)0x5cf664;
  thunk_FUN_00406e80(&local_10,3);
  return;
}
