// rea decompile_all
// name: FUN_0071d608
// address: 0x71d608
// body: available
// range: 0x71d608-0x71d64f inclusive
// range: 0x71d688-0x71d745 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x71d61c (push 0x71d746 followed by fs-segment stack chaining); handler 0x71d746 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0071d608(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;

  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_0071d746;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puVar1 = &stack0xfffffffc;
  if (param_1 != 0) {
    iVar2 = FUN_0071cdcc(param_1);
    uVar3 = FUN_0071cde4(param_1);
    puVar1 = puStack_14;
    if (iVar2 == 3) {
      switch(uVar3) {
      default:
        FUN_0040839c(&local_8,L"Internal error: Cannot change properties of ",
                     *(undefined4 *)(param_1 + 8));
        FUN_004d43f8(local_8);
        puVar1 = puStack_14;
        break;
      case 1:
        FUN_0062cde0(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0xc));
        puVar1 = puStack_14;
        break;
      case 2:
        FUN_006f5b74(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0xc));
        puVar1 = puStack_14;
        break;
      case 3:
        FUN_00652548(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0xc));
        puVar1 = puStack_14;
        break;
      case 4:
        FUN_00693174(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0xc));
        puVar1 = puStack_14;
        break;
      case 6:
        FUN_0064e08c(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0xc));
        puVar1 = puStack_14;
        break;
      case 7:
        FUN_00655d90(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0xc));
        puVar1 = puStack_14;
        break;
      case 8:
        FUN_00722a90(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0xc));
        puVar1 = puStack_14;
        break;
      case 9:
        FUN_006fcea8(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0xc));
        puVar1 = puStack_14;
        break;
      case 10:
        FUN_00533890();
        puVar1 = puStack_14;
        break;
      case 0xb:
        FUN_00709db4();
        puVar1 = puStack_14;
        break;
      case 0xc:
        FUN_006fa858(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0xc));
        puVar1 = puStack_14;
        break;
      case 0xd:
        FUN_007138f0();
        puVar1 = puStack_14;
      }
    }
  }
  puStack_14 = puVar1;
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0071d74d;
  puStack_18 = (undefined1 *)0x71d745;
  thunk_FUN_00406e5c(&local_8,uStack_1c,puVar1);
  return;
}
