// rea decompile_all
// name: FUN_005f93b0
// address: 0x5f93b0
// body: available
// range: 0x5f93b0-0x5f95d1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5f93fa (push 0x5f95d2 followed by fs-segment stack chaining); handler 0x5f95d2 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005f93b0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_1e8;
  undefined *in_stack_fffffe20;
  undefined4 uStack_1c4;
  undefined1 *puStack_1c0;
  undefined1 *puStack_1bc;
  undefined4 local_1b0;
  undefined4 local_1ac;
  int local_1a8;
  int local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c [2];
  double local_194;
  double local_17c;
  double local_164;
  double local_14c;
  undefined4 local_134;
  undefined4 local_130;
  undefined1 local_1c [24];

  local_1b0 = 0;
  local_1ac = 0;
  puStack_1bc = (undefined1 *)0x5f93e1;
  FUN_0040902c(local_19c,&DAT_00615f70,0x10);
  puStack_1bc = (undefined1 *)0x5f93ef;
  FUN_00408ff8(local_1c,&DAT_00615f70);
  puStack_1c0 = &LAB_005f95d2;
  uStack_1c4 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c4;
  puStack_1bc = &stack0xfffffffc;
  FUN_0061fc40(&local_1a4,&local_1a8);
  cVar1 = FUN_005f9388(param_1);
  if (cVar1 == '\0') {
    FUN_006113b0(&PTR_DAT_005f95f0,0);
  }
  else {
    local_1a0 = FUN_0060d2cc(&DAT_0060b63c,1,0,0,0,0,0,0);
    iVar3 = 0x10;
    puVar2 = local_19c;
    do {
      *puVar2 = 0;
      puVar2 = puVar2 + 6;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    local_194 = (double)DAT_00688624;
    local_17c = (double)DAT_00688628;
    local_164 = (double)local_1a4;
    local_14c = (double)local_1a8;
    local_134 = param_4;
    local_130 = param_5;
    iVar3 = *(int *)(DAT_00850e10 + param_1 * 4);
    if (iVar3 < 500000) {
      if (99999 < iVar3) {
        cVar1 = FUN_00588af8(iVar3 + -100000,local_1a0,local_1a0,local_1c,0,0xf,local_19c,5);
        if (cVar1 == '\0') {
          in_stack_fffffe20 = *(undefined **)(DAT_00850e14 + param_1 * 4);
          uStackY_1e8 = *(undefined4 *)PTR_DAT_00689674;
          FUN_0040875c(&local_1b0,4);
          FUN_006113b0(local_1b0,0);
        }
      }
    }
    else {
      cVar1 = FUN_00586134(iVar3 + -500000,local_1a0,local_1a0,local_1c,0xf,local_19c,5);
      if (cVar1 == '\0') {
        in_stack_fffffe20 = &DAT_005f968c;
        FUN_0040875c(&local_1ac,4);
        uStackY_1e8 = 0x5f9518;
        FUN_006113b0(local_1ac,0);
      }
    }
    FUN_00405fdc(local_1a0);
  }
  *in_FS_OFFSET = uStackY_1e8;
  thunk_FUN_004072fc(&local_1b0,2,in_stack_fffffe20,&LAB_005f95d9);
  FUN_00409120(local_19c,&DAT_00615f70,0x10);
  FUN_004090d0(local_1c,&DAT_00615f70);
  return;
}
