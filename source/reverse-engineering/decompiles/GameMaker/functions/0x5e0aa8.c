// rea decompile_all
// name: FUN_005e0aa8
// address: 0x5e0aa8
// body: available
// range: 0x5e0aa8-0x5e0b43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5e0acb (push 0x5e0b44 followed by fs-segment stack chaining); handler 0x5e0b44 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005e0aa8(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int extraout_EDX;
  uint uVar6;
  uint extraout_EDX_00;
  int iVar7;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_8;

  puStack_1c = (undefined1 *)0x5e0ac0;
  local_8 = param_1;
  thunk_FUN_00407660(param_1);
  puStack_20 = &LAB_005e0b44;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  iVar3 = FUN_005e1988(local_8,param_2,param_3);
  if (0 < iVar3) {
    if (SBORROW4(iVar3,1)) {
      FUN_00405944();
    }
    if (-1 < iVar3 + -1) {
      iVar7 = 0;
      do {
        iVar4 = FUN_00407058(&local_8);
        iVar5 = iVar7 + param_3;
        if (SCARRY4(iVar7,param_3)) {
          iVar4 = FUN_00405944();
          iVar5 = extraout_EDX;
        }
        uVar6 = iVar5 - 1;
        if ((iVar4 == 0) || (*(uint *)(iVar4 + -4) <= uVar6)) {
          iVar4 = thunk_FUN_00404478();
          uVar6 = extraout_EDX_00;
        }
        cVar2 = FUN_005e0b58(*(undefined2 *)(iVar4 + -2 + (uVar6 + 1) * 2));
        if (cVar2 == '\0') break;
        iVar7 = iVar7 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_005e0b4b;
  puStack_20 = (undefined1 *)0x5e0b43;
  thunk_FUN_00406e5c(&local_8,uStack_24,puVar1);
  return;
}
