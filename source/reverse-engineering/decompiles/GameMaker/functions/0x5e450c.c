// rea decompile_all
// name: FUN_005e450c
// address: 0x5e450c
// body: available
// range: 0x5e450c-0x5e4595 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5e4525 (push 0x5e4596 followed by fs-segment stack chaining); handler 0x5e4596 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005e450c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  undefined1 *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_18;
  undefined1 local_14;
  undefined4 local_10;
  undefined1 local_c [4];
  undefined1 local_8 [4];

  puStack_20 = &stack0xfffffffc;
  local_10 = 0;
  puStack_24 = &LAB_005e4596;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  uVar12 = 0;
  uVar11 = 0;
  puVar10 = local_c;
  uVar9 = 4;
  puVar8 = local_8;
  uVar7 = 0x10;
  uVar6 = 0xc8000006;
  iVar1 = (*DAT_0077da10)();
  if (iVar1 != 0) {
    FUN_0040b75c(PTR_PTR_007824c8,&local_10);
    local_14 = 0x11;
    puVar4 = &local_18;
    uVar3 = 0;
    uVar5 = local_10;
    local_18 = param_2;
    uVar2 = (*DAT_0077d968)();
    FUN_005e4400(&PTR_LAB_005e40fc,1,uVar2,uVar3,puVar4,uVar5,param_1,uVar6,param_3,uVar7,puVar8,
                 uVar9,puVar10,uVar11,uVar12);
    FUN_00406618();
  }
  *in_FS_OFFSET = param_1;
  thunk_FUN_00406e5c(&local_10,param_1,param_3,&LAB_005e459d);
  return;
}
