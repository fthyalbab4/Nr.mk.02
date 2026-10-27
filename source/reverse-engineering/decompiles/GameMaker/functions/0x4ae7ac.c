// rea decompile_all
// name: FUN_004ae7ac
// address: 0x4ae7ac
// body: available
// range: 0x4ae7ac-0x4ae839 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_004ae7ac(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  int in_stack_00000004;
  int local_8;

  iVar2 = *(int *)(*(int *)(in_stack_00000004 + -4) + 0x20);
  if (iVar2 == 0) {
    iVar2 = FUN_004ae0ec(*(undefined4 *)(in_stack_00000004 + -8));
    bVar7 = 0 < iVar2;
  }
  else {
    iVar3 = FUN_004ae0ec(iVar2);
    iVar4 = FUN_004ae0ec(*(undefined4 *)(in_stack_00000004 + -8));
    if (iVar3 == iVar4) {
      bVar7 = false;
      local_8 = FUN_004ae0ec(*(undefined4 *)(in_stack_00000004 + -8));
      if (-1 < local_8 + -1) {
        iVar3 = 0;
        do {
          uVar5 = FUN_004ae598(iVar2,iVar3);
          uVar6 = FUN_004ae598(*(undefined4 *)(in_stack_00000004 + -8),iVar3);
          bVar1 = FUN_004adae0(uVar6,uVar5);
          if ((bVar1 ^ 1) != 0) {
            return (bool)(bVar1 ^ 1);
          }
          iVar3 = iVar3 + 1;
          local_8 = local_8 + -1;
          bVar7 = false;
        } while (local_8 != 0);
      }
    }
    else {
      bVar7 = true;
    }
  }
  return bVar7;
}
