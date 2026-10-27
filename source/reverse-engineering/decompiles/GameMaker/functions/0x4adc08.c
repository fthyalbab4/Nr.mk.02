// rea decompile_all
// name: FUN_004adc08
// address: 0x4adc08
// body: available
// range: 0x4adc08-0x4ade72 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4adc29 (push 0x4ade73 followed by fs-segment stack chaining); handler 0x4ade73 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004adc08(int param_1,undefined4 param_2,char param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_64;
  undefined1 *puStack_60;
  undefined1 *puStack_5c;
  undefined4 local_4b;
  undefined4 local_47;
  undefined4 local_43;
  undefined4 local_3f;
  undefined4 local_3b;
  undefined4 local_37;
  int local_33;
  char local_2f;
  byte local_2e;
  undefined4 local_2d;
  undefined4 local_29;
  undefined4 local_25;
  undefined4 local_21;
  undefined4 local_1d;
  int local_19;
  byte local_15;
  undefined1 local_14 [7];
  char local_d;
  undefined4 local_c;
  int local_8;

  puStack_5c = &stack0xfffffffc;
  local_8 = 0;
  puStack_60 = &LAB_004ade73;
  uStack_64 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_64;
  local_d = param_3;
  local_c = param_2;
  FUN_004aebe0(*(undefined4 *)(param_1 + 4));
  if ((local_d == '\0') || (local_d == '\x02')) {
    FUN_0043f488(local_c,local_14,4);
    FUN_0043f488(local_c,&local_2d,0x19);
    FUN_00408244(&local_8,local_15);
    if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
      FUN_00407048(&local_8,local_8);
    }
    uVar2 = thunk_FUN_004089c0(&local_8);
    FUN_0043f488(local_c,uVar2,(uint)local_15 * 2);
    FUN_004ac910(param_1,local_8);
    FUN_004acb64(param_1,local_2d);
    FUN_004acc04(param_1,local_29);
    FUN_004accb0(param_1,local_25);
    FUN_004acc60(param_1,local_21);
    FUN_004ac9b4(param_1,local_1d);
    FUN_004acbc0(param_1,0xffffffff);
    FUN_004ac8bc(param_1,1);
    FUN_004ad0b4(param_1,local_19 != 0);
    if ((0 < local_19) && (iVar3 = local_19, -1 < local_19 + -1)) {
      do {
        uVar2 = FUN_004ae1e8(*(undefined4 *)(param_1 + 4),param_1,0);
        FUN_004adc08(uVar2,local_c,local_d);
        FUN_00405d08(*(undefined4 *)(*(int *)(param_1 + 4) + 4),uVar2);
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  else if (local_d == '\x04') {
    FUN_0043f488(local_c,local_14,4);
    FUN_0043f488(local_c,&local_4b,0x1e);
    FUN_00408244(&local_8,local_2e);
    if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
      FUN_00407048(&local_8,local_8);
    }
    uVar2 = thunk_FUN_004089c0(&local_8);
    FUN_0043f488(local_c,uVar2,(uint)local_2e * 2);
    FUN_004ac910(param_1,local_8);
    FUN_004acb64(param_1,local_4b);
    FUN_004acc04(param_1,local_47);
    FUN_004accb0(param_1,local_43);
    FUN_004acc60(param_1,local_3f);
    FUN_004acbc0(param_1,local_3b);
    FUN_004ac8bc(param_1,local_2f != '\0');
    FUN_004ac9b4(param_1,local_37);
    FUN_004ad0b4(param_1,local_33 != 0);
    if ((0 < local_33) && (iVar3 = local_33, -1 < local_33 + -1)) {
      do {
        uVar2 = FUN_004ae1e8(*(undefined4 *)(param_1 + 4),param_1,0);
        FUN_004adc08(uVar2,local_c,local_d);
        FUN_00405d08(*(undefined4 *)(*(int *)(param_1 + 4) + 4),uVar2);
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  puVar1 = puStack_5c;
  *in_FS_OFFSET = uStack_64;
  puStack_5c = &LAB_004ade7a;
  puStack_60 = (undefined1 *)0x4ade72;
  thunk_FUN_00406e5c(&local_8,uStack_64,puVar1);
  return;
}
