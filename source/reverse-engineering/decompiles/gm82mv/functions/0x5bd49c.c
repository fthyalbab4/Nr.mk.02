// rea decompile_all
// name: FUN_005bd49c
// address: 0x5bd49c
// body: available
// range: 0x5bd49c-0x5bd597 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005bd49c(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_14;

  DAT_0068753c = 0;
  local_14 = FUN_00571ea8();
  if (-1 < local_14 + -1) {
    iVar6 = 0;
    do {
      cVar1 = FUN_00571eb0(iVar6);
      if (cVar1 != '\0') {
        uVar2 = FUN_00571fac(iVar6);
        iVar3 = FUN_00571ea8();
        if (iVar6 <= iVar3 + -1) {
          iVar7 = ((iVar3 + -1) - iVar6) + 1;
          iVar3 = iVar6;
          do {
            cVar1 = FUN_00571eb0(iVar3);
            if (cVar1 != '\0') {
              uVar4 = FUN_00571fac(iVar3);
              iVar5 = FUN_0060f9dc(uVar2,4,iVar3);
              if (iVar5 == 0) {
                iVar5 = FUN_0060f9dc(uVar4,4,iVar6);
                if (iVar5 == 0) goto LAB_005bd57e;
              }
              iVar5 = FUN_00409c34(DAT_0084f578);
              if (iVar5 <= DAT_0068753c) {
                FUN_00409dfc(&DAT_0084f578,&DAT_005bd474,1,DAT_0068753c + 5);
              }
              *(int *)(DAT_0084f578 + DAT_0068753c * 8) = iVar6;
              *(int *)(DAT_0084f578 + 4 + DAT_0068753c * 8) = iVar3;
              DAT_0068753c = DAT_0068753c + 1;
            }
LAB_005bd57e:
            iVar3 = iVar3 + 1;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
      }
      iVar6 = iVar6 + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  return;
}
