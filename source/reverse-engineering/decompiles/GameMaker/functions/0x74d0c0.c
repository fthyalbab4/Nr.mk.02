// rea decompile_all
// name: FUN_0074d0c0
// address: 0x74d0c0
// body: available
// range: 0x74d0c0-0x74d181 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0074d0c0(int param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined2 extraout_var;
  uint uVar4;
  int local_1c;
  uint local_18;
  int local_14;

  uVar1 = *(undefined4 *)(param_1 + 0x14);
  cVar2 = FUN_0074eb4c(uVar1);
  if ((cVar2 != '\0') && (FUN_0074dcb0(uVar1,CONCAT22(extraout_var,6),&local_1c), local_1c != 0)) {
    cVar2 = FUN_0074df24(uVar1,L".debug",&local_14);
    if ((cVar2 == '\0') || (*(int *)(local_14 + 0xc) != local_1c)) {
      cVar2 = FUN_0074df24(uVar1,L".rdata",&local_14);
      if (cVar2 == '\0') {
        return;
      }
      uVar4 = local_18 / 0x1c;
      iVar3 = FUN_0074de44(uVar1,local_18 % 0x1c);
      iVar3 = ((iVar3 + local_1c) - *(int *)(local_14 + 0xc)) + *(int *)(local_14 + 0x14);
    }
    else {
      iVar3 = FUN_0074e8a0(uVar1,*(undefined4 *)(local_14 + 0xc));
      uVar4 = local_18;
    }
    if (0 < (int)uVar4) {
      do {
        FUN_0043ae88(param_1,iVar3);
        iVar3 = iVar3 + 0x1c;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  return;
}
