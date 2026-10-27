// rea decompile_all
// name: FUN_0071d7bc
// address: 0x71d7bc
// body: available
// range: 0x71d7bc-0x71d839 inclusive
// range: 0x71d86e-0x71d8db inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x71d7db (push 0x71d8dc followed by fs-segment stack chaining); handler 0x71d8dc lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0071d7bc(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *in_FS_OFFSET;
  bool bVar5;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;

  puStack_18 = (undefined1 *)0x71d7d0;
  local_8 = param_2;
  thunk_FUN_00407660(param_2);
  puStack_1c = &LAB_0071d8dc;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  bVar5 = param_1 == 0;
  puStack_18 = &stack0xfffffffc;
  if ((!bVar5) &&
     (puStack_18 = &stack0xfffffffc, FUN_00408640(*(undefined4 *)(param_1 + 8),local_8), !bVar5)) {
    FUN_004ac910(param_1,local_8);
    iVar2 = FUN_0071cdcc(param_1);
    uVar3 = FUN_0071cde4(param_1);
    uVar4 = FUN_0071cdfc(param_1);
    DAT_0077f5f4 = 1;
    if (iVar2 == 3) {
      switch(uVar3) {
      case 1:
        FUN_0062cb88(uVar4,local_8);
        break;
      case 2:
        FUN_006f5980(uVar4,local_8);
        break;
      case 3:
        FUN_00652320(uVar4,local_8);
        break;
      case 4:
        FUN_00692f84(uVar4,local_8);
        break;
      case 6:
        FUN_0064de98(uVar4,local_8);
        break;
      case 7:
        FUN_00655ba0(uVar4,local_8);
        break;
      case 8:
        FUN_007228a0(uVar4,local_8);
        break;
      case 9:
        FUN_006fccb8(uVar4,local_8);
        break;
      case 0xc:
        FUN_006fa668(uVar4,local_8);
      }
    }
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0071d8e3;
  puStack_1c = (undefined1 *)0x71d8db;
  thunk_FUN_00406e5c(&local_8,uStack_20,puVar1);
  return;
}
