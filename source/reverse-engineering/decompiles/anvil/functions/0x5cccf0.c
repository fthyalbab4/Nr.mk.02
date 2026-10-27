// rea decompile_all
// name: FUN_005cccf0
// address: 0x5cccf0
// body: available
// range: 0x5cccf0-0x5ccda7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5ccd1c (push 0x5ccda8 followed by fs-segment stack chaining); handler 0x5ccda8 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005cccf0(undefined4 param_1,undefined4 param_2,int *param_3,int param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_c;
  int local_8;

  local_c = 0;
  puStack_20 = (undefined1 *)0x5ccd0e;
  uVar2 = FUN_0040430c(0x4c);
  puStack_24 = &LAB_005ccda8;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_20 = &stack0xfffffffc;
  iVar3 = FUN_005cc898(param_1,param_2,0x13,0x1ffffffe,uVar2,&local_c,param_5,param_6,param_3,
                       param_7,0x1e,&DAT_00687ad4,0x1e,&DAT_00687a58,0x13);
  if (iVar3 == -3) {
    FUN_0040b9d0(&LAB_005cad2c,param_4 + 0x18);
  }
  else if ((iVar3 == -5) || (*param_3 == 0)) {
    FUN_0040b9d0(&LAB_005cad34,param_4 + 0x18);
    iVar3 = -3;
  }
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_005ccdaf;
  puStack_24 = (undefined1 *)0x5ccda7;
  local_8 = iVar3;
  FUN_00404340(uVar2,uStack_28,puVar1);
  return;
}
