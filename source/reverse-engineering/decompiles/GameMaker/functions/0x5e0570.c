// rea decompile_all
// name: FUN_005e0570
// address: 0x5e0570
// body: available
// range: 0x5e0570-0x5e0631 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5e0593 (push 0x5e0632 followed by fs-segment stack chaining); handler 0x5e0632 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005e0570(int param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  int extraout_EDX;
  int iVar7;
  uint uVar8;
  int iVar9;
  int extraout_EDX_00;
  int iVar10;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_18;
  uint local_14;
  int local_10;
  int local_8;

  local_18 = 0;
  puStack_24 = (undefined1 *)0x5e0588;
  local_8 = param_1;
  thunk_FUN_00407660(param_1);
  puStack_28 = &LAB_005e0632;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  local_14 = 0;
  local_10 = 0;
  puStack_24 = &stack0xfffffffc;
  FUN_00407058(&local_8);
  iVar3 = FUN_00408238();
  if (0 < iVar3) {
    iVar10 = 1;
    do {
      puVar4 = &local_18;
      if ((local_8 == 0) || (iVar7 = local_8, *(uint *)(local_8 + -4) <= iVar10 - 1U)) {
        puVar4 = (undefined4 *)thunk_FUN_00404478(puVar4);
        iVar7 = extraout_EDX;
      }
      FUN_00408034(puVar4,*(undefined2 *)(iVar7 + -2 + iVar10 * 2));
      uVar5 = FUN_005e2640(local_18,0);
      uVar8 = local_10 << 3 | local_14 >> 0x1d;
      uVar6 = local_14 * 8 + uVar5;
      uVar1 = (uint)CARRY4(local_14 * 8,uVar5);
      iVar7 = uVar8 + ((int)uVar5 >> 0x1f);
      iVar9 = iVar7 + uVar1;
      if (SCARRY4(uVar8,(int)uVar5 >> 0x1f) != SCARRY4(iVar7,uVar1)) {
        uVar6 = FUN_00405944();
        iVar9 = extraout_EDX_00;
      }
      iVar10 = iVar10 + 1;
      iVar3 = iVar3 + -1;
      local_14 = uVar6;
      local_10 = iVar9;
    } while (iVar3 != 0);
  }
  puVar2 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_005e0639;
  puStack_28 = (undefined1 *)0x5e0629;
  thunk_FUN_00406e5c(&local_18,uStack_2c,puVar2);
  puStack_28 = (undefined1 *)0x5e0631;
  thunk_FUN_00406e5c(&local_8);
  return;
}
