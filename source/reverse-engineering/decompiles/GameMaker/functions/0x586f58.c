// rea decompile_all
// name: FUN_00586f58
// address: 0x586f58
// body: available
// range: 0x586f58-0x5870dd inclusive
// range: 0x5870e5-0x5870f0 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x586f85 (push 0x5870de followed by fs-segment stack chaining); handler 0x5870de lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00586f58(uint param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7,undefined4 param_8,int *param_9,int *param_10,
                undefined4 param_11)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;

  local_10 = 0;
  puStack_24 = (undefined1 *)0x586f77;
  local_8 = param_2;
  uVar2 = FUN_00404304(0x480);
  puStack_28 = &LAB_005870de;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  local_c = 0;
  puStack_24 = &stack0xfffffffc;
  iVar3 = FUN_00586a34(param_3,param_11,param_1,0x1ffffffe,uVar2,&local_10,param_5,param_6,param_10,
                       param_8,0x1e,&DAT_0077c5c4,0x1e,&DAT_0077c548,0x101);
  if ((iVar3 == 0) && (*param_10 != 0)) {
    iVar3 = FUN_00586a34(param_3 + param_1 * 4,0x1ffffffe,local_8,0x1ffffffe,uVar2,&local_10,param_5
                         ,param_6,param_9,param_7,0x1d,&DAT_0077c6b8,0x1d,&DAT_0077c640,0);
    if ((iVar3 != 0) || ((*param_9 == 0 && (0x101 < param_1)))) {
      if (iVar3 == -3) {
        FUN_0040b75c(&PTR_DAT_00584ed8,param_4 + 0x18);
      }
      else if (iVar3 == -5) {
        FUN_0040b75c(&PTR_DAT_00584ee0,param_4 + 0x18);
        iVar3 = -3;
      }
      else if (iVar3 != -4) {
        FUN_0040b75c(&PTR_DAT_00584ee8,param_4 + 0x18);
        iVar3 = -3;
      }
      FUN_00404338(uVar2);
      local_c = iVar3;
    }
    puVar1 = puStack_24;
    *in_FS_OFFSET = uStack_2c;
    puStack_24 = (undefined1 *)0x5870e5;
    puStack_28 = (undefined1 *)0x5870dd;
    iVar3 = FUN_00404338(uVar2,uStack_2c,puVar1);
    return iVar3;
  }
  if (iVar3 == -3) {
    FUN_0040b75c(&PTR_DAT_00584ed8,param_4 + 0x18);
  }
  else if (iVar3 != -4) {
    FUN_0040b75c(&PTR_DAT_00584ee0,param_4 + 0x18);
    iVar3 = -3;
  }
  FUN_00404338(uVar2);
  local_c = iVar3;
  FUN_0040670c();
  return local_c;
}
