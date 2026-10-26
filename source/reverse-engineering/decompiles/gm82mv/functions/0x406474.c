// rea decompile_all
// name: FUN_00406474
// address: 0x406474
// body: available
// range: 0x406474-0x4064e5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00406474(int *param_1,char *param_2)

{
  int iVar1;
  undefined2 *puVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  byte bVar6;
  int iVar7;

  iVar5 = 0;
  iVar7 = 0;
  cVar3 = *param_2;
  piVar4 = param_1;
  do {
    iVar1 = *piVar4;
    puVar2 = *(undefined2 **)(iVar1 + -0x44);
    if ((puVar2 != (undefined2 *)0x0) &&
       (iVar7 = CONCAT22((short)((uint)iVar7 >> 0x10),*puVar2), iVar7 != 0)) {
      piVar4 = (int *)(puVar2 + 3);
      do {
        iVar5 = CONCAT31((int3)((uint)iVar5 >> 8),*(char *)((int)piVar4 + 6));
        if (*(char *)((int)piVar4 + 6) == cVar3) {
          while ((bVar6 = *(byte *)(iVar5 + 6 + (int)piVar4), (bVar6 & 0x80) == 0 &&
                 (bVar6 = bVar6 ^ param_2[iVar5], (bVar6 & 0x80) == 0))) {
            if ((bVar6 & 0xdf) != 0) goto LAB_004064a9;
            iVar5 = iVar5 + -1;
            if (iVar5 == 0) goto LAB_004064dd;
          }
          cVar3 = FUN_00406304((undefined2 *)((int)piVar4 + 6));
          iVar5 = 0;
          if (cVar3 != '\0') {
LAB_004064dd:
            return *piVar4 + (int)param_1;
          }
LAB_004064a9:
          cVar3 = *param_2;
          iVar5 = CONCAT31((int3)((uint)iVar5 >> 8),*(undefined1 *)((int)piVar4 + 6));
        }
        piVar4 = (int *)(iVar5 + 7 + (int)piVar4);
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    piVar4 = *(int **)(iVar1 + -0x30);
    if (piVar4 == (int *)0x0) {
      return 0;
    }
  } while( true );
}
